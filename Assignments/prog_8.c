#include <stdio.h>
#include <stdlib.h> //Needed for rand() and srand() (random number generation).
#include <time.h> //Used with time(NULL) to seed the random number generator.

long long comparisons = 0;
long long swaps = 0;

/* Utility function to print array */
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            swaps++;
        }
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0) {
            comparisons++;
            if (arr[j] > key) {
                arr[j + 1] = arr[j];
                swaps++;
                j--;
            } else {
                break;
            }
        }
        arr[j + 1] = key;
    }
}

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        comparisons++;
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int N, choice;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    int arr[N];

    srand(time(NULL));
    for (int i = 0; i < N; i++)
        arr[i] = rand() % 1000 + 1;
    // srand(time(NULL)) ensures that rand() generates different random numbers each time

    printf("\nGenerated Numbers:\n");
    printArray(arr, N);

    printf("\nChoose Sorting Algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    comparisons = 0;
    swaps = 0;

    switch (choice) {
        case 1:
            bubbleSort(arr, N);
            break;
        case 2:
            selectionSort(arr, N);
            break;
        case 3:
            insertionSort(arr, N);
            break;
        case 4:
            mergeSort(arr, 0, N - 1);
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("\nSorted Numbers:\n");
    printArray(arr, N);

    printf("\nTotal Comparisons: %lld\n", comparisons);
    if (choice != 4)
        printf("Total Swaps: %lld\n", swaps);
    else
        printf("Total Swaps: Not applicable for Merge Sort\n");

    return 0;
}

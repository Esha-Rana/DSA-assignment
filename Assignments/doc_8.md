## **Sorting Algorithms Comparison in C**

To implement a C program that generates N random integers in the range [1, 1000], where N is provided by the user at runtime. The user can choose one of several sorting algorithms to sort the generated numbers. The program displays the array before and after sorting and reports the total number of comparisons and swaps performed by the selected algorithm.
---

## Features
- Random number generation using rand()
- User-defined array size
- Menu-driven selection of sorting algorithm
- Displays array before and after sorting
- Counts number of comparisons
- Counts number of swaps (where applicable)

## A utility function 
It is a helper function that performs a common or repeated task, is not the main algorithm
, makes the program cleaner, reusable, and easier to read. 

## Sorting Algorithms Implemented
- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort

## Time Complexity

| Algorithm      | Time Complexity |
| -------------- | --------------- |
| Bubble Sort    | O(N²)           |
| Selection Sort | O(N²)           |
| Insertion Sort | O(N²)           |
| Merge Sort     | O(N log N)      |

## Program Workflow
1. User enters the number of elements (N).
2. Program generates N random integers between 1 and 1000.
3. User selects a sorting algorithm from the menu.
4. The chosen algorithm sorts the array.
5. The program displays:
    - Original (unsorted) array
    - Sorted array
    - Total number of comparisons
    - Total number of swaps (if applicable)

## Sample Output

- Enter number of elements: 6
- Unsorted Array:
312 45 876 129 5 678

- Sorted Array:
5 45 129 312 678 876

- Total Comparisons: 10
- Total Swaps: 5

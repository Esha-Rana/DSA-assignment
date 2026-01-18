#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Reverse traversal using recursion ()
void reverseTraversal(struct Node *head) {
    if (head == NULL) 
        return;                  //When we reach the end of the list, head becomes NULL, so we stop recursion.
    reverseTraversal(head->next);//This means we keep calling the function until we reach the last node.
    printf("%d ", head->data); /*After the recursion reaches the end,
                                    the function starts returning back step by step.
                                    Now, it prints the node’s data from last to first.*/
}

int main() {
    struct Node *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    
    printf("Reverse Traversal (Singly Linked List): ");
    reverseTraversal(head);
    printf("\n");

    return 0;
}
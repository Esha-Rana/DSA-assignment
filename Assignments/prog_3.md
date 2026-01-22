# Reverse Traversal of a Singly Linked List in C

This program demonstrates **reverse traversal** of a singly linked list using **recursion**. The linked list nodes are dynamically created, and the elements are printed in reverse order without modifying the original list.
---

## (a) Data Structures Used
- **Node Structure**: Each node contains:
  - `data` → the value stored in the node.  
  - `next` → pointer to the next node.

```c
struct Node {
    int data;           // Stores the value of the node
    struct Node *next;  // Pointer to the next node in the list
};
```

## (b) Functions Implemented

1. **createNode(int value)** : dynamically creates a new node with the given value
    - Allocates memory for a new node.
    - Sets the data field to value.
    - Initializes next as NULL.
    - Returns a pointer to the new node.

2. **reverseTraversal(struct Node *head)**: Prints the linked list in reverse order using recursion.
    - Base Case: If head is NULL, stop recursion.
    - Recursive Call: Go to the next node first (head->next).
    - Print: Once recursion reaches the end, print the node values while returning from recursion.
    - This prints the linked list from last node to first node.

## (c) Overview of `Main ()`

- Create nodes with values 10, 20, and 30.
- Link nodes to form a singly linked list: 10 -> 20 -> 30 -> NULL.
- Call reverseTraversal(head) to print the elements in reverse.
- Print a newline and end the program.

## (d) Sample output

- `Reverse Traversal (Singly Linked List): 30 20 10`

The recursion visits the last node first and prints nodes while returning, giving the reverse order of the linked list.






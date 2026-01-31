# **Min and Max Heap in C**

## Objective
To build **Min Heap** and **Max Heap** from an **unsorted array** using the heapify technique.
The heap is implemented using an **array-based representation** of a complete binary tree.
---

## What is a Heap?
A **heap** is a **complete binary tree** that satisfies a specific ordering property:

- **Min Heap**: Parent node is less than or equal to its children  
- **Max Heap**: Parent node is greater than or equal to its children  

> A heap is **not fully sorted**. Only the root element is guaranteed to be minimum or maximum.

## Array Index Rules
For an element stored at index `i`:

- Left child  : `2*i + 1`
- Right child : `2*i + 2`
- Parent      : `(i - 1) / 2`

## Algorithm

### Build Max Heap
1. Start from the last non-leaf node `(n/2 - 1)`
2. Apply `maxHeapify()` for each node up to the root
3. Swap parent with the largest child if heap property is violated

### Build Min Heap
1. Start from the last non-leaf node `(n/2 - 1)`
2. Apply `minHeapify()` for each node up to the root
3. Swap parent with the smallest child if heap property is violated

## Functions Used
- `swap(int *a, int *b)` – swaps two integer values
- `maxHeapify(int arr[], int n, int i)` – maintains Max Heap property
- `minHeapify(int arr[], int n, int i)` – maintains Min Heap property
- `buildMaxHeap(int arr[], int n)` – builds Max Heap
- `buildMinHeap(int arr[], int n)` – builds Min Heap
- `printHeap(int arr[], int n)` – prints heap elements


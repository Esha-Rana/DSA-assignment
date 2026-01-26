# Undirected Graph using Adjacency Matrix (BFS and DFS)

## Objective
To implement an **undirected graph** using an **adjacency matrix** and perform graph traversal using:
- **BFS (Breadth First Search)**
- **DFS (Depth First Search)**

The program takes the number of vertices and edges as input, stores the graph in an adjacency matrix, and then traverses the graph starting from vertex `0`.
---

## Theory

### 1) Graph
A graph is a collection of:
- **Vertices (nodes)** → represent objects (0, 1, 2, ...)
- **Edges** → represent connections between vertices (lines)

### 2) Undirected Graph
In an undirected graph, edges work in both directions.

If there is an edge:
`u - v`

Then:
- `u` is connected to `v`
- `v` is connected to `u`

### 3) Adjacency Matrix
An adjacency matrix is a 2D array used to represent a graph.

For `n` vertices, matrix size is `n x n`.

- `adj[i][j] = 1` → there is an edge between vertex `i` and vertex `j`
- `adj[i][j] = 0` → no edge exists between vertex `i` and vertex `j`

Since this is an **undirected graph**, if `adj[u][v] = 1` then `adj[v][u] = 1` also.
---
### 4) Traversal

## BFS (Breadth First Search)
Visit all nearest nodes first then go deeper.
It uses a **Queue (FIFO)**

Example BFS order:
`0 → all neighbors of 0 → neighbors of those nodes ...`

## DFS (Depth First Search)
DFS goes as deep as possible before backtracking.
It uses **recursion** (stack concept).

Example DFS order:
`0 → go deep to one neighbor → keep going deeper → backtrack when stuck`
---

### 5)Program Features
- Input number of vertices (`n`)
- Input number of edges
- Input edges as pairs `(u v)`
- Stores the graph using an adjacency matrix
- Performs:
  - BFS traversal starting from vertex `0`
  - DFS traversal starting from vertex `0`
# **Dijkstra’s Algorithm in C**

## Features
- Implementation of Dijkstra’s Algorithm
- Graph represented using an adjacency matrix
- Computes shortest distance from a single source node
- Time Complexity: O(N²)

## Algorithm Description
- Dijkstra’s Algorithm follows a greedy approach:
- Initialize all distances as infinity.
- Select the unvisited node with the minimum distance.
- Mark the selected node as visited.
- Update distances of its adjacent nodes.
- Repeat until all nodes are processed.

`Note: This algorithm works only for non-negative edge weights.`

## Graph Representation
- graph[i][j] represents the weight of the edge between node i and node j
- A value of 0 indicates no direct edge between nodes

## Sample Output
|   Node   | Distance from Source |
|----------|----------------------|
|    0     |           0          |
|    1     |           8          |
|    2     |           5          |
|    3     |           6          |
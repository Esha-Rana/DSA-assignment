#include <stdio.h>
#include <limits.h>

#define N 4

int main() {
    int graph[N][N] = {
        {0, 5, 0, 10},
        {5, 0, 3, 0},
        {0, 3, 0, 1},
        {10, 0, 1, 0}
    };

    int distance[N];
    int visited[N];
    int source = 0;

    for (int i = 0; i < N; i++) {
        distance[i] = INT_MAX;
        visited[i] = 0;
    }
    distance[source] = 0;

    for (int count = 0; count < N - 1; count++) {
        int min = INT_MAX;
        int u = -1;

        for (int i = 0; i < N; i++) {
            if (!visited[i] && distance[i] < min) {
                min = distance[i];
                u = i;
            }
        }

        if (u == -1)
            break;

        visited[u] = 1;

        for (int v = 0; v < N; v++) {
            if (!visited[v] &&
                graph[u][v] != 0 &&
                distance[u] != INT_MAX &&
                distance[u] + graph[u][v] < distance[v]) {

                distance[v] = distance[u] + graph[u][v];
            }
        }
    }

    printf("Node  Distance from Source\n");
    for (int i = 0; i < N; i++) {
        printf("%d \t %d\n", i, distance[i]);
    }

    return 0;
}

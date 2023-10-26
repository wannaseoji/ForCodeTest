#include <iostream>
#include <queue> // use bfs algorithm
#include <cstring> // use memset

#define MAX_SIZE 100 

using namespace std;
int graph[MAX_SIZE][MAX_SIZE];
int ans[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE];
int N; 


void bfs(int start) {
    
    queue<int> q;
    q.push(start);
    //visited[start] = 1;
    //ans[start][0] = 1;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (int i = 0; i < N; i++) {
            if (graph[curr][i] == 1 && visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
   
}

int main() {
 
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> graph[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        memset(visited, 0, sizeof(visited));
        bfs(i);
        for (int j = 0; j < N; j++) {
            if (visited[j] == 1) {
                ans[i][j] = 1;

            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << ans[i][j]<<" ";

        cout << "\n";
    }
    return 0;
}

#include<iostream>
#include<vector>
#include<cstring>
#include <queue>
using namespace std;



int Graph[1001][1001];
int Visited[1001];
int N, M, V;

void dfs(int node) {

	if (Visited[node] == 1) return;
	
	Visited[node] = 1;
	cout << node << " ";
	for (int i = 0; i <= N; i++) {
		if (Graph[node][i] == 1 && Visited[i] == 0)
			dfs(i);
	}

	

}
void bfs(int node) {
	queue <int> q;

	q.push(node);
	
	while (!q.empty()) {
		int cur  = q.front();
		
		q.pop();
		
		if (Visited[cur] == 1)continue;
		cout << cur << " ";
		Visited[cur] = 1;

		for (int i = 0; i <= N; i++) {
			if (Graph[cur][i] == 1 && Visited[i] == 0)
				q.push(i);
		}
	}
	

}
int main() {

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		int u, v;
		cin >> u >> v;
		Graph[v][u] = Graph[u][v] = 1;

	}
	dfs(V);
	cout << endl;
	memset(Visited, 0, sizeof(Visited));
	bfs(V);
	return 0;
}
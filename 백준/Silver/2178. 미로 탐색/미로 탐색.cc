#include<iostream>
#include<string>
#include<map>
#include<queue>
using namespace std;


int graph[101][101];
int visited[101][101];
int ans[101][101];

int N, M;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


void bfs(int y, int x) {
	queue<pair<int, int>> q;
	q.push(make_pair(y, x));

	ans[y][x] = 1;
	visited[y][x] = 1;

	while (!q.empty()) {

		int y = q.front().first;
		int x = q.front().second;

		q.pop();
		
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (nx < 0 || nx >= M || ny < 0 || ny >= N)
				continue;
			if (graph[ny][nx] == 0)
				continue;
			if (graph[ny][nx] == 1 && visited[ny][nx] == 0)
			{
				ans[ny][nx] = ans[y][x] + 1;
				q.push(make_pair(ny, nx));
				visited[ny][nx] = 1;
			}
		}
	}
	

}
int main() {
	
	cin >> N >> M;
	string temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		for (int j = 0; j < M; j++) {
			if (temp[j] == '0')
				graph[i][j] = 0;
			else
				graph[i][j] = 1;
		}
	}
	//for (int i = 1; i <= N; i++) {
	//	for (int j = 1; j <= M; j++) {
	//		cout << graph[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	bfs(0,0);

	cout << ans[N - 1][M - 1] << endl;
	return 0;
}
#include<iostream>
#include<queue>

using namespace std;
int n_R = 0;
int n_R1 = 0;
int n_G = 0;
int n_B = 0;
int n_B1 = 0;
int N;
int graph[101][101];
int graph2[101][101]; //적록색맹의 그래프 

int visited[101][101];
int visited2[101][101];
int ans[101][101];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

void bfs3(int i, int j) {
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));

	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (nx < N && nx >= 0 && ny < N && ny >= 0) {
				if (graph[ny][nx] == 3 && visited[ny][nx] == 0) {
					visited[ny][nx] = 3;
					q.push(make_pair(ny, nx));
					ans[ny][nx] = 3;

				}

			}

		}

	}
	//cout << "n_B " << ++n_B << endl;

}
void bfs2(int i, int j) {
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));

	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (nx < N && nx >= 0 && ny < N && ny >= 0) {
				if (graph[ny][nx] == 2 && visited[ny][nx] == 0) {
					visited[ny][nx] = 1;
					q.push(make_pair(ny, nx));
					//ans[ny][nx] = 2;

				}

			}

		}

	}
	//cout << "n_G " << ++n_G << endl;

}
void bfs1(int i, int j) {
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));

	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (nx <N && nx >= 0 && ny <N && ny >= 0) {
				if (graph[ny][nx] == 1 && visited[ny][nx]==0) {
					visited[ny][nx] = 1;
					q.push(make_pair(ny, nx));
					ans[ny][nx] = 1;
					
				}
				
			}

		}

	}
	//cout << "n_R " << ++n_R << endl; 

}
void bfs4(int i, int j) {
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));

	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (nx < N && nx >= 0 && ny < N && ny >= 0) {
				if (graph2[ny][nx] == 1 && visited2[ny][nx] == 0) {
					visited2[ny][nx] = 1;
					q.push(make_pair(ny, nx));
					//ans[ny][nx] = 1;

				}

			}

		}

	}
	//cout << "n_R " << ++n_R << endl; 

}
void bfs5(int i, int j) {
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));

	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (nx < N && nx >= 0 && ny < N && ny >= 0) {
				if (graph2[ny][nx] == 3 && visited2[ny][nx] == 0) {
					visited2[ny][nx] = 1;
					q.push(make_pair(ny, nx));
					//ans[ny][nx] = 1;

				}

			}

		}

	}
	//cout << "n_R " << ++n_R << endl; 

}

int main() {
	cin >> N;
	string temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		for (int j = 0; j < N; j++) {
			if (temp[j] == 'R') {
				graph[i][j] = 1;
				graph2[i][j] = 1;
			}
			else if (temp[j] == 'G') {
				graph[i][j] = 2;
				graph2[i][j] = 1;
			}
			else if (temp[j] == 'B') {
				graph[i][j] = 3;
				graph2[i][j] = 3;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (visited[i][j] == 0 && graph[i][j]==1) {
				bfs1(i, j);	
				n_R++;
			}
			if (visited[i][j] == 0 && graph[i][j] == 2) {
				bfs2(i, j);
				n_G++;
			}
			if (visited[i][j] == 0 && graph[i][j] == 3) {
				bfs3(i, j);
				n_B++;
			}
			if (visited2[i][j] == 0 && graph2[i][j] == 3) {
				bfs5(i, j);
				n_B1++;
			}
			if (visited2[i][j] == 0 && graph2[i][j] == 1) {
				bfs4(i, j);
				n_R1++;
			}
			
		}
	}
	cout << n_R + n_G + n_B << " ";
	cout << n_R1  + n_B1 << " ";
		

	//for (int i = 0; i < N; i++) {
	//	for (int j = 0; j < N; j++) {
	//		cout << ans[i][j];
	//	}
	//	cout << endl;
	//}
	return 0;
}
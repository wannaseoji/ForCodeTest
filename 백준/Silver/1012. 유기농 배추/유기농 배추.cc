#include<iostream>
#include<vector>
#include<cstring>

using namespace std;


int board[51][51];
int visited[51][51];
int ans = 0;
int dy[4] = { 0,1,0,-1 };
int dx[4] = { 1,0,-1,0 };


void dfs(int y, int x) {
	for (int i = 0; i < 4; i++) {
		if (visited[y + dy[i]][x + dx[i]] == 0 && board[y + dy[i]][x + dx[i]] == 1) {
				visited[y + dy[i]][x + dx[i]] = 1;
				dfs(y + dy[i], x + dx[i]);
		}
	}

}

int main() {
	int M, N, K,T;
	cin >> T;
	while (T--) {
		memset(board, 0, sizeof(board) );
		memset(visited, 0, sizeof(visited));
		ans = 0;

		cin >> M >> N >> K;
		for (int i = 0; i < K; i++) {
			int X, Y;
			cin >> X >> Y;
			board[Y][X] = 1;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (board[i][j] == 1 && visited[i][j]==0) {
					visited[i][j] = 1;
					dfs(i, j);
					ans++;
				}
			}

		}
		cout << ans << '\n';
		//cout << "  " << endl;
		
	}
	

	return 0;
}
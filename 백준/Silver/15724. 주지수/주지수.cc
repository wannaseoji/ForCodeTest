#include<iostream>

using namespace std;
int N, M; //영토의 크기 <=1024
int K; //<=100000
int population[1025][1025];
int dp[1025][1025];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> population[i][j];
			
		}
	}
	dp[1][1] = population[1][1];
	dp[1][2] = dp[1][1] + population[1][2];
	dp[2][1] = dp[1][1] + population[2][1];
	//dp[2][2] = dp[2][1] + dp[1][2] - dp[1][1] + population[2][2];
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1] + population[i][j];
			//cout << dp[i][j]<<" ";
		}
		//cout << endl;
	}
	//for (int i = 0; i <= N; i++) {
	//	for (int j = 0; j <= M; j++) {
	//		cout << dp[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	cin >> K;//testcase 수
	
	for (int i = 0; i < K; i++) {
		int x1, x2, y1, y2;
		int ans = 0;
		cin >> x1 >> y1 >> x2 >> y2; //좌표입력

		ans = dp[x2][y2] - dp[x1-1][y2] - dp[x2][y1-1] + dp[x1-1][y1-1];
		
		cout << ans << '\n';
	}
	


	return 0;
}
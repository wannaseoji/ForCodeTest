#include<iostream>


using namespace std;
long long int dp[91];//dp n은 n자리 이친수의 수
long long int n;
int main() {
	cin >> n; 
	dp[0] = 0;
	dp[1] = 1; //1
	dp[2] = 1;// 10
	dp[3] = 2;  // 101, 100
	dp[4] = 3;   // 1010, 1001, 1000
	dp[5] = 5; // 
	for (int i = 3; i <= 90; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n];
	return 0;
}
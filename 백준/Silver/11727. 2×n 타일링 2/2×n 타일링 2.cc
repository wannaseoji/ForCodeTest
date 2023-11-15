#include<iostream>
using namespace std;

int n;

int dp[1001];
int main() {


	cin >> n; 
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 3;
	dp[3] = 5;
	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 2]*2 + dp[i - 1]) % 10007;
	}
	cout << dp[n];
	// 0 1 1 2 3 5 8 
	return 0;
}
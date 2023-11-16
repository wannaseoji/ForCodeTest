#include<iostream>
using namespace std;

int n;
int p[10001];//가격이 들어있음
long long int dp[10001];
int main() {
	cin >> n;
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	
	cout << dp[n] << endl;

}
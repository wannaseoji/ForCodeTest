#include<iostream>
using namespace std;

int n;
int p[10001];//가격이 들어있음
int dp[10001];
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
	dp[0] = 0;
	dp[1] = p[1];
	//cout << dp[1]<<endl;
	dp[2] = max(p[1]+p[1], p[2]);
	
	//cout << dp[2]<<endl;

	//dp[3] = max(dp[2] + p[1], p[3]);
	//dp[4] = max(dp[3] + p[1], dp[2]+p[2],p[4]);
	//dp[5] = max(dp[3] + p[2], dp[4]+p[1],p[5]);
	for (int i = 3; i <= n; i++)
	{
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i - j] + p[j], dp[i]);
		}
			
		//cout << dp[i] << endl;
	}
	cout << dp[n] << endl;

}
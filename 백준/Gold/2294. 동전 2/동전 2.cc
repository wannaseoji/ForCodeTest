#include<iostream>
#include<vector>
#define __min(a, b) (((a) < (b)) ? (a) : (b))

using namespace std;



int main() {

	int n, k, temp;
	
	cin >> n;
	cin >> k;
	int * dp = new int[k+1];
	int* coins = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> coins[i];
	}
	for (int i = 1; i <= k; i++) {
		dp[i] = 100001;
	}
	//index : k, 값 : 동전의 최소개수
	dp[0] = 0; 
	for (int i = 0; i < n; i++) {
		dp[coins[i]] = 1;
	}

	//int res = dp(k);
	for (int i = 0; i < n; i++) {
		int coin = coins[i];
		for (int j = coin; j <= k; j++) {
			
			dp[j] = __min(dp[j], dp[j-coin]+1);
		}
	}
	if (dp[k] == 100001)
		cout << -1;
	else
		cout << dp[k];



	return 0;
}
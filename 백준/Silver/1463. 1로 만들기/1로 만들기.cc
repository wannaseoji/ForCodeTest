#include<iostream>
#include<algorithm>

using namespace std;

int dp[1000001]; // 최대 입력 범위에 따라 배열 크기를 조절하세요.

int solve(int x) {
    dp[1] = 0; // 1을 1로 만드는데 필요한 연산 횟수는 0입니다.
    
    for (int i = 2; i <= x; i++) {
        dp[i] = dp[i - 1] + 1; // 1을 뺀 경우
        
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1); // 2로 나눈 경우
        }
        
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1); // 3으로 나눈 경우
        }
    }
    
    return dp[x];
}

int main() {
    int x;
    cin >> x;
    cout << solve(x);
    return 0;
}

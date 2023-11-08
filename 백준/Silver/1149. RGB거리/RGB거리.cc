#include<iostream>


using namespace std;
int N; 
int houses[1001][3];
int cost[1001][3];

int main() {

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++)
			cin >> houses[i][j];
	}
	cost[0][0] = houses[0][0]; //0번째 것을 고르고 시작했을 때 
	cost[0][1] = houses[0][1]; //1번째 것을 고르고 시작했을 때
	cost[0][2] = houses[0][2]; //2번째 것을 고르고 시작했을 때


	for (int i = 1; i < N; i++) {
		cost[i][0]/*현재의 0번째를 고른 cost는*/ = min(cost[i - 1][1]/*1번째를 고른 cost와 */ + houses[i][0], cost[i - 1][2] + houses[i][0]);

		cost[i][1] = min(cost[i-1][0]+houses[i ][1], cost[i-1][2] +houses[i ][1]);
		cost[i][2] = min(cost[i-1][0]+houses[i ][2], cost[i-1][1]+ houses[i ][2]);
	}
	//for (int i = 0; i < N; i++) {
	//	cout << endl;
	//	cout << cost[i][0] << " " << cost[i][1] <<" " << cost[i][2];
	//	cout << endl;
	//}
	int mi = min(cost[N - 1][0], cost[N - 1][1]);
	mi = min(mi, cost[N - 1][2]);
	cout << mi; 
	return 0;
}
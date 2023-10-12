#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>

using namespace std;





int list[101];
bool checklist[101];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N,M;
	int temp;
	queue <int> q;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> list[i];
	}
	
	
	// 수를 3개를 선택해서 더했을때 M과 가장 가까운 수를 찾아서 리턴
	// M보다는 더해진 수가 크지 않음
	// 시간제한 1초 = 1억번 연산
	//모든 수를 3개씩 더해서 수를 저장한다.
	vector <int> slist;


	int sum = 0;
	int min = 987654321;
	int goal;
	for (int i = 0; i < N - 2; i++)
		for (int j = i + 1; j < N - 1; j++)
			for (int k = j + 1; k < N; k++)
			{
				sum = list[i] + list[j] + list[k];
				if (M - sum < min && M - sum >= 0) {
					min = M - sum;
					goal = sum;
				}
			}
	cout << goal;
	return 0;
}





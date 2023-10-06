#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

unsigned int list[10000];
int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int K, N;

	cin >> K >> N;
	unsigned int m = 0;
	unsigned int answer = 0; 
	for (int i = 0; i < K; i++) {
		cin >> list[i];
		m = max(m, list[i]);

	}
	unsigned int left = 1;
	unsigned int right = m;
	unsigned int mid;

	while (left <= right) {
		mid = (left + right) / 2;
		unsigned int sum = 0;
		for (int i = 0; i < K; i++) {
			sum += list[i] / mid;
		}
		if (sum >= N) {
			left = mid + 1;
			answer = max(answer, mid);
		}
		else {
			right = mid - 1;
		}
	}
	cout << answer << '\n';
	


	return 0;
}
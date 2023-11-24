#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v1; // 크레인의 수와 제약
vector<int> v2; // 화물의 무게
//int dp[1000];

bool comp(int a, int b) {
	return a > b;
}
int main() {
	int n, k;
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n; 



	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v1.push_back(temp);

	}
	cin >> k;
	for (int i = 0; i < k; i++) {
		int temp;
		cin >> temp;
		v2.push_back(temp);

	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	if (v1[v1.size() - 1] < v2[v2.size() - 1]) {
		cout << -1 << endl;
		return 0;

	}
	int time = 0;
	while (!v2.empty()) {
		for (int i = v1.size()-1; i >= 0; i--) {
			if (v2.empty())break;
			if (v1[i] >= v2.back()) {
				v2.pop_back();
			}
			else {
				for (int j = v2.size() - 2; j >= 0; j--) {
					if (v1[i] >= v2[j]) {
						v2.erase(v2.begin() + j);
						break;
					}
				}
			}
		}
		time++;
	}

	cout << time;
	
	return 0;
}
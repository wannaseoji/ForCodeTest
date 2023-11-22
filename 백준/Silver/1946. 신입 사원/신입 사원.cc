#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

int main() {


	int T;
	cin >> T;
	vector<pair<int, int>> v;
	while (T--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int a, b;
			cin >> a >> b;
			v.push_back(make_pair(a, b));

		}
		sort(v.begin(), v.end());
		int cnt = 1;
		int k = v[0].second;
		for (int i = 0; i < v.size()-1; i++) {
			if (k > v[i + 1].second) {
				k = v[i + 1].second;
				cnt++;
			}
		}
		cout << cnt << endl;
		v.clear();
	}

	return 0;
}
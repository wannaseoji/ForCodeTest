#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int n, m;
vector<long long int> v;

int main() {

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i < m; i++) {
		sort(v.begin(), v.end());

		long long int x = v[0];
		long long int y = v[1];

		v[0] = x + y;
		v[1] = x + y;
	}
	long long int sum = 0;
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}
	cout << sum << endl;


	return 0;
}
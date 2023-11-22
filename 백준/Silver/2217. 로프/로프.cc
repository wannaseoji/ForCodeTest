#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	vector<int>v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	int ma=v[0]*n;

	for (int i = 0; i < v.size(); i++) {
		ma = max(ma, v[i]*(n-i));
	}
	
	cout <<ma  << endl;
}
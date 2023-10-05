#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;

vector<int> arr1;
vector<int> arr2;

int main() {
	int N, M;  
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int temp;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		arr1.push_back(temp);
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> temp;
		arr2.push_back(temp);
	}
	sort(arr1.begin(), arr1.end());
	for (int i = 0; i < M; i++) {
		cout<< binary_search(arr1.begin(), arr1.end(), arr2[i])<<'\n';
	}
	return 0;
}
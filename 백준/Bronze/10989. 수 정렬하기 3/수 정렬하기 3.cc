#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<map>
#include<queue>
#include<algorithm>
using namespace std;


int list1[10001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	int temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		list1[temp]++;
	}
	
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < list1[i]; j++)
			cout << i << '\n';
	}

	return 0;
}





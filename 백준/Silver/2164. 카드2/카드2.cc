#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>

using namespace std;






int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int temp;
	queue <int> q;
	cin >> n;
	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}
	

	if (q.size() <= 1)temp = 1;
	else {
		while (q.size()>1) {
			q.pop();
			temp = q.front();
			q.pop();
			q.push(temp);
		}
	}
	cout << temp << endl;;
	return 0;
}





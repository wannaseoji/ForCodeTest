#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<string>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, K;
	queue <int> q;
	vector <int > v;
	cin >> N >> K;

	for (int i = 0; i < N; i++)
		q.push(i + 1);
	int temp;
	int cnt = 1;
	while (!q.empty()) {
		temp = q.front();
		if (cnt % K == 0) {
			//cout << temp;
			v.push_back(temp);
		}
		else q.push(temp); 

		q.pop();
		cnt++;
		
		
	}
	cout << "<";
	for (int i = 0; i < v.size(); i++) {
		if (i != v.size() - 1)
			cout << v[i] << ", ";
		else
			cout << v[i];
	}
	cout << ">";
	return 0;
}





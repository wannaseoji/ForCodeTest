#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<string>
#include<stack>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	stack<int> s;
	string order;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> order;
		if (order == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (order == "pop") {
			if (s.empty()) {
				cout << "-1" << '\n';
				continue;
			}
			cout << s.top() << '\n';
			s.pop();
		}
		else if (order == "size") {
			cout << s.size() << '\n';
		}
		else if (order == "empty") {
			if (s.empty()) {
				cout << "1" << '\n';
			}
			else cout << "0" << '\n';

		}
		else {
			if (s.empty())cout << "-1" << '\n';
			else {
				cout << s.top() << '\n';
			}
		}
		
		

	}
	
	return 0;
}





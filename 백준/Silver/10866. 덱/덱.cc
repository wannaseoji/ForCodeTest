#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<string>
#include<stack>
#include<deque>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	deque<int> s;
	string order;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> order;
		if (order == "push_back") {
			int num;
			cin >> num;
			s.push_back(num);
		}
		else if (order == "push_front") {
			int num; 
			cin >> num;
			s.push_front(num);

		}
		else if (order == "pop_back") {
			if (s.empty()) {
				cout << "-1" << '\n';
				continue;
			}
			cout << s.back() << '\n';
			s.pop_back();
		}
		else if (order == "pop_front") {
			if (s.empty()) {
				cout << "-1" << '\n';
				continue;
			}
			cout << s.front() << '\n';
			s.pop_front();
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
		else if(order == "front") {
			if (s.empty())cout << "-1" << '\n';
			else {
				cout << s.front() << '\n';
			}
		}
		else {
			if (s.empty())cout << "-1" << '\n';
			else {
				cout << s.back() << '\n';
			}
		}
		
		

	}
	
	return 0;
}





#include<iostream>

#include<string>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	stack<int> s;
	cin >> n;

	int temp;
	int topValue = 0;

	string answer;

	while (n--) {
		cin >> temp;
		if (temp > topValue) {
			while (temp > topValue) {
				s.push(++topValue);
				answer += '+';
			}
			s.pop();
			answer += '-';
		}
		else {
			bool check = false;
			if (!s.empty()) {
				if (temp == s.top()) {
					check = true;
				}
				s.pop();
				answer += '-';

			}
			if (!check) {
				cout << "NO" << '\n';
				return 0;
			}
		}
	}
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << '\n';
	}
	return 0;
}
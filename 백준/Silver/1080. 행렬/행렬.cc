	#include<iostream>

	using namespace std;
	int arr[51][51];
	int answer[51][51];
	int N, M;
	int cnt; 
	void change(int y, int x) {
		cnt++;
		for (int i = y; i < y + 3; i++) {
			for (int j = x; j < x + 3; j++) {
				if (arr[i][j] == 1)
					arr[i][j] = 0;
				else
					arr[i][j] = 1;
			}
		}
	}

	int main() {

	

		cin >> N >> M;
		
		
		string a;
		for (int i = 0; i < N; i++) {
			cin >> a;
			for (int j = 0; j < a.size(); j++) {
				arr[i][j] = a[j]-'0';
			}
		}
		for (int i = 0; i < N; i++) {
			cin >> a;
			for (int j = 0; j < a.size(); j++) {
				answer[i][j] = a[j]-'0';
			}
		}
	
		for (int i = 0; i < N-2; i++) {
			for (int j = 0; j < M-2; j++) {
				if (arr[i][j] != answer[i][j]) {
					change(i, j);
				}
				//if (arr[i][j] != answer[i][j]) {
				//	cout << -1 << endl;
				//}
			}
		}
		for (int i = 0; i < N ; i++) {
			for (int j = 0; j < M ; j++) {
				if (arr[i][j] != answer[i][j]) {
					cout << -1 << endl;
					return 0;
				}
				//if (arr[i][j] != answer[i][j]) {
				//	cout << -1 << endl;
				//}
			}
		}
		

		cout << cnt << endl;
		return 0;
	}
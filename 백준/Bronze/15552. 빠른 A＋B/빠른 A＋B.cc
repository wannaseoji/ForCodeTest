#include<iostream>

using namespace std;

int main() {
	int N, A, B;
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		cout << A+B <<"\n";
	
	}
	return 0;
}
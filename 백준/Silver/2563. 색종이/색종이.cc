#include <iostream>


using namespace std;


int arr[2];
int board[100][100];
int main() {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[0];
		cin >> arr[1];

		for (int j = arr[0]; j < arr[0] + 10; j++) {
			for (int k = arr[1]; k < arr[1] + 10; k++)
				board[k][j] = 1;
		}
	}
	for(int i=0;i<100; i++)
		for (int j = 0; j < 100; j++) {
			sum += board[j][i];
	}

	cout << sum;
	return 0;
}
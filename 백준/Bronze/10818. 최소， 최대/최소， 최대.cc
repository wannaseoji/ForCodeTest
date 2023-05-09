#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, X,a;
	int arr[1000000];
	int count = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr[i] = a;
	}
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < N; i++) {
		if (min > arr[i])min = arr[i];
		if (max < arr[i])max = arr[i];
	}
	cout << min << " " << max;
}
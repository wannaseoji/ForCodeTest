#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
	int N;
	int M;
	cin >> N;
	int* arr = new int[N];
	double* newArr = new double[N];
	double sum = 0;
	double avg = 0;
	double max = 0;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];

	}
	//avg = sum / N;
	for (int i = 0; i < N; i++) {
		if (max < arr[i])max = arr[i];
	}
	for (int i = 0; i < N; i++) {
		newArr[i] = arr[i] / max * 100;
	}
	for (int i = 0; i < N; i++) {
		sum += newArr[i];
	}
	cout << sum / N;
	return 0;
}
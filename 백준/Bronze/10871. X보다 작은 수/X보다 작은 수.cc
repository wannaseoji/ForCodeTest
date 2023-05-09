#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, X,a;
	int arr[10000];
	int count = 0;
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> a;
		arr[i] = a;
	}
	
	for (int i = 0; i < N; i++) {

		if (X > arr[i]&&arr[i]!=0)
			cout << arr[i] << " ";
	}

}
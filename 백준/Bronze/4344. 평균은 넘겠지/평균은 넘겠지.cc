#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n;
	int m;
	int sum = 0;
	double avg = 0;
	int cnt = 0;
	double res;
	cin>> n;

	for (int i = 0; i < n; i++) {
		cin >> m;
		sum = 0;
		cnt = 0;
		int* arr = new int[m];
		for (int j = 0; j < m; j++) {
			cin >> arr[j];
			sum += arr[j];	
		}
		avg = sum / m;
		for (int j = 0; j < m; j++) {
			if (avg < arr[j])cnt++;
		}
		res = (double(cnt) / m);
		res *= 100000;
		
		res = round(res) / 100000. * 100;
		cout << fixed;
		cout.precision(3);
		cout << res << "%" << endl;
	}

	return 0;
}
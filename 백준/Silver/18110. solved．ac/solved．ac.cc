#include <iostream>
#include <vector>
#include<algorithm>
#include<cmath>
using namespace std;



vector<int> list;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N;  // 의견의 개수 
	cin >> N;
	if (N == 0)
	{
		cout << 0;
		return 0;
	}
	double temp = N * 15 / 100.;
	int n;
	n = round(temp);
	//cout <<"n : " << n << endl;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		list.push_back(temp);
	}
	double sum = 0; 
	int cnt = 0; 
	sort(list.begin(), list.end());
	for (int i = 0 + n; i < N - n; i++) {
		//cout << list[i] << endl;
		sum += list[i];
		cnt++;
	}
	int answer = round(sum / cnt);
	cout << answer << '\n';
}
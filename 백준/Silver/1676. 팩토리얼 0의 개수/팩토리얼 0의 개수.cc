#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;


int facNum[501];
int count5(int k) {
	int n = k;
	int count = 0;
	//49
	while (1) {
		if (n < 5)break;
		if (n % 5 != 0) break;
		if (n % 5 == 0)count++;
		n = n / 5;
	}


	return count;
}

int main() {
	
	int n;
	cin >> n;
	int k = n;
	
	int cnt5 = 0; // k == 10,9,8......1
	int cnt2 = 0;
	while (1) {
		if (k < 5)break;
		
		cnt5 += count5(k);
		//cnt2 += count2(k);
		k -= 1;

	}
	//printf("5 : %d  2 : %d\n", cnt5, cnt2);
	int cnt10 = 0;
	cnt10 = cnt5;
	if (n < 5)cnt10 = 0;


	cout <<cnt10 <<endl;
	
	return 0;
}
#include<iostream>

using namespace std;
int T;
int N, M;

long long int ans(int N, int M) {
	//M!/N!
	
	
	//M! / (M-N)!
	int r = 1; //N factorial 
	int ans = 1;
	for (int i = M; i > M-N; i--) {
		 //dp factorial 배열
		ans = ans * i;
		ans = ans / r++;
		//if (r >= N) continue;

	}
	return ans;
}

int main() {
	cin >> T;
	while (T--) {
		
		cin >> N >> M;
	
		cout << ans(N, M) << endl;
	}

	return 0;
}
#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;


vector <int> numbers;
int primes[1000001];


bool getAllPrime(int M, int N) {
	for (int i = M; i <= N; i++) {
		primes[i] = i;
		
	}
	
	for (int i = 2; i*i <= N; i++) {
		if (primes[i] == -1)continue;
		int j = i; 
		while (j <= N) {
			if (j *i > N)break;
			primes[i * j] = -1;
			j = j +1;
		}
		
		
	}
	//for (int i = 0; i <= N; i++) {
	//	cout << primes[i] <<'\n';
	//
	//}
	primes[1] = -1;
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N;
	cin >> M >> N;
	for (int i = M; i <= N; i++) {
		primes[i] = -1;
	}
    
	getAllPrime(M, N);
	for (int i = M; i <= N; i++) {
		if (primes[i] != -1)cout << primes[i] << '\n';
   }
	return 0;
}
#include<iostream>
#include<queue>
using namespace std;
long long int A, B;
//int graph[100000000];
//int visited[100000000];
int cnt; 

void bfs(long long int A) {
	queue<pair<long long int,long long int>> q;
	
	q.push(make_pair(A,0));

	while (!q.empty()) {

		long long int curr = q.front().first;
		long long int count = q.front().second;
		q.pop();
		if (curr > B) {
			cout << -1;
			return; 
		}
		if (curr == B) {
			cout << count+1;
			return;
		}
		long long int m1 = curr * 2;
		long long int m2 = curr * 10 + 1;

		if (m1 <= B) {
			
			q.push(make_pair(m1,count+1));
			//visited[m1] = 1;
		}
		if (m2 <= B ) {
		
			q.push(make_pair(m2, count + 1));
			//visited[m2] = 1;
		}
		
	}
	cout << -1;


}


int main() {
	cin >> A >> B;
	if (A == B)cout << 0;
	
	bfs(A);
	
	//cout << cnt;
	return 0; 
}
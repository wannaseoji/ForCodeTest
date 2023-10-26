
#include <iostream>
#include <string>
#include <cstring>
#include <cmath> 
#include<vector>
#include<queue>
#include<map>

using namespace std;





//int Graph[101][101];
int visited[10001]; 
//int Board[1001][1001];
int A, B;

int N, M;


void bfs() {

	//cout << start_int << end_int << endl;
	
	queue<pair<int, string>> q;
	q.push(make_pair(A, ""));
	visited[A] = 1;


	while (!q.empty()) {

		int curr = q.front().first;
		string DSLR = q.front().second;
		q.pop();
		
		if (curr == B) {
			cout << DSLR << '\n';
			return;
		}
		int d, s, l, r;
		d = (curr * 2) % 10000;
		if (visited[d] == 0) {
			visited[d] = 1;
			q.push(make_pair(d, DSLR + "D"));
		}
		s = curr - 1;
		
		if ( s< 0) {
			if (visited[9999] == 0) {
				visited[9999] = 1;
				q.push(make_pair(9999, DSLR + "S"));
			}
			
		}
		else {
			if (visited[s] == 0) {
				visited[s] = 1;
				q.push(make_pair(s, DSLR + "S"));
			}
			
		}

		l = (curr % 1000) * 10 + (curr / 1000);
		if (visited[l] == 0) {
			visited[l] = 1;
			q.push(make_pair(l, DSLR + "L"));
		}
		r = (curr / 10) + (curr % 10) * 1000;
		if (visited[r] == 0)
		{
			visited[r] = 1;
			q.push(make_pair(r, DSLR + "R"));
		}
	}

	
}
int main() {
	int T;
	

	cin >> T;
	while (T--) {
		cin >> A >> B;
		memset(visited, 0, sizeof(visited));
		bfs();

	}

	return 0;
}
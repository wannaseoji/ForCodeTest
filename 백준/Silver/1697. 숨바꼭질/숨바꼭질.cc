
#include <iostream>
#include <string>
#include <cmath> 
#include<vector>
#include<queue>
#include<map>

using namespace std;





//int Graph[101][101];
int visited[100001]; 


int N, K;

void bfs(int start) {


	queue<pair<int, int>> q;
	q.push(make_pair(start, 0));

	visited[start] = 1;

	while (!q.empty())
	{
		int curr = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if (curr == K) {
			cout << cnt;
			break;
		}
		if (curr + 1 >= 0 && curr + 1 < 100001) {
			if (visited[curr + 1] == 0) {
				visited[curr + 1] = 1;
				q.push(make_pair(curr + 1, cnt + 1));
			}
		}
		if (curr - 1 >= 0 && curr - 1 < 100001) {
			if (visited[curr - 1]==0) {
				visited[curr - 1] = 1;
				q.push(make_pair(curr - 1, cnt + 1));
			}


		}
		if (curr * 2 >= 0 && curr * 2 < 100001) {
			if (visited[curr * 2]==0) {
				visited[curr * 2] = 1;
				q.push(make_pair(curr * 2, cnt + 1));
			}
		}
	}

	
}
int main() {

	cin >> N >>K;


	bfs(N);

	return 0;
}
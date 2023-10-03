#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

char Board[51][51];

string WB[8] = {
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW"
};
string BW[8] = {
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB"
};
int Bfunction(int i, int j) {
	int count = 0;
	for (int k = i; k < i + 8; k++) {
		for (int l = j; l < j + 8; l++) {
			if (BW[k-i][l-j] != Board[k][l])count++;
		}
	}
	return count;
}
int Wfunction(int i, int j) {
	int count = 0;
	for (int k = i; k < i + 8; k++) {
		for (int l = j; l < j + 8; l++) {
			if (WB[k-i][l-j] != Board[k][l])count++;
		}
	}
	return count;

}
int main() {

	int N, M;
	cin >> N;
	cin >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> Board[i][j];
		}
	}

	vector<int> list;	
	for (int i = 0; i+7 < N; i++) {
		for (int j = 0; j+7 < M; j++) {
				list.push_back(Bfunction(i, j));
			
				list.push_back(Wfunction(i, j));

			
		}
	}
	
	int min = list[0];
	for (int i = 1; i < list.size(); i++) {
		if (min > list[i])min = list[i];
	}
	cout << min;


	return 0;
}
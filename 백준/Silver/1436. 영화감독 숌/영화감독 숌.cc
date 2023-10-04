#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

vector<int> End;

bool findEndNum(int i) {
	if (i < 666)return false;
	string sixes  = to_string(i);
	bool check = false;
	
	for (int i = 0; i < sixes.size()-2; i++) {
		if (sixes[i] == '6' && sixes[i+1]=='6' && sixes[i+2]=='6') {
			check = true;
		}
	}
	return check;
}

int main() {
	
	int num; //몇번째 종말수 출력
	cin >> num;
	
	for (int i = 0; i < 100000000; i++) {
		if (findEndNum(i)) {
			End.push_back(i);
		}
	}
	

	cout <<End[num-1]<<endl;
	return 0;

}
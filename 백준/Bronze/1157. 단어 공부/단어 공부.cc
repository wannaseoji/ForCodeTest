#include<iostream>

using namespace std;

int alphaArr[1000];

int main() {
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		alphaArr[toupper(str[i])]+=1;
	}
	int max = 0;
	int index;
	for (int i = 0; i < 1000; i++) {
		if (max < alphaArr[i]) {
			max = alphaArr[i];
			index = i;
		}
	}
	int cnt = 0;
	for (int i = 0; i < 1000; i++) {
		if (max == alphaArr[i])cnt++;
	}
	if (cnt > 1)cout << "?";
	else cout << char(index);
	return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<string>
using namespace std;

typedef struct IDC {
	int age;
	string name;
	int idx; //들어온순서
};

bool comp1(IDC a, IDC b) {
	if (a.age != b.age)
		return a.age < b.age;
	else
		return a.idx < b.idx;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int age;
	string name;
	vector<IDC> v;
	IDC member;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> member.age >> member.name;
		member.idx = i;
		v.push_back(member);
	}
	sort(v.begin(), v.end(), comp1);
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].age <<" " << v[i].name << '\n';
	}
	

	return 0;
}





#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;



vector<int> v;
vector<int> f;

int listP[4001];
int listM[4001];


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n;
	cin >> n;
	short temp;

	for (int i = 0; i < 4001; i++) {
		listP[i] = -1;
		listM[i] = -1;
	}

	for(int i=0; i<n; i++) {
		cin >> temp;
		v.push_back(temp);
		if (temp >= 0) {
			listP[temp]++;
		}
		else {
			temp *= -1;
			listM[temp]++;
		}
	}
	double  sum = 0;
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}
	double result = round(sum / n);
	if (result == 0) result = 0;
	
	cout << result <<endl;

	sort(v.begin(), v.end());
	 cout << v[v.size() / 2]<<endl;

	
	 int freq = 0; 
	 for (int i = 0; i < 4001; i++) {
		 if (freq < listP[i]) freq = listP[i];
		 if (freq < listM[i]) freq = listM[i];

	}

	 for (int i = 0; i < 4001; i++) {
		 if (listP[i] == freq) f.push_back(i);
		 if (listM[i] == freq) f.push_back((-i));

	 }
	 sort(f.begin(), f.end());
	 if(f.size()>1)
		cout << f[1] << endl;
	 else
		 cout << f[0] << endl;
	


	 cout << v.back() - v.front() << endl;
	return 0;
}





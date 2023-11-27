#include<iostream>
#include<algorithm>
using namespace std;

int n; 
int dice[7];
long long  arr[3];
int main() {


	cin >> n; 
	int ma = -1;
	for (int i = 1; i < 7; i++) {
		cin >> dice[i];//<=50
		ma = max(ma, dice[i]);
	}
	arr[0] = min(dice[1], dice[6]);
	arr[1] = min(dice[2], dice[5]);
	arr[2] = min(dice[3], dice[4]);
	sort(arr, arr + 3);
	if(n==1){
		int ans = 0; 
		for (int i = 1; i < 7; i++) {
			ans += dice[i];
		}
		cout << ans - ma;
		return 0;
	}

	long long i1 = arr[0]; //1면 
	long long i2 = arr[0]+arr[1];//2면
	long long i3 = arr[0]+ arr[1]+arr[2];//3면
	
	long long ans = 0; 

	ans += i3 * 4; 
	ans += i2 *((long long)4 * (n - 1) + (long long)4 * (n - 2));
	ans += i1 * (4 * (long long)(n - 1) * (n - 2)+(long long)(n-2)*(n-2));

	cout << ans << endl;
	//N<=1, 000, 000

	return 0;
}
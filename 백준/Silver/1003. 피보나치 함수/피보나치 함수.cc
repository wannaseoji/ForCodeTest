#include<iostream>
#include<vector>


using namespace std;


/*
1. dp 테이블 정의
2. dp table 초기화
3. 규칙 찾아서 적용
4. 출력
*/
int count0 = 0;
int count1 = 0;
long long fibo[41] = {0,1,};

long long fibonacci(long long n) {
    if (n == 0) {
        return fibo[n];
    }
    else if (n == 1) {
        //printf("1");
        return fibo[n];
    }
    else if(fibo[n]==0){
        fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return fibo[n];
}
int main() {

    int T;
    cin >> T;
    int tmp;
    for (int i = 0; i < T; i++)
    {
        cin >> tmp;
        if (tmp == 0)
            cout << "1 0" << '\n';
        else
            cout << fibonacci(tmp - 1) << ' ' << fibonacci(tmp) << '\n';
    }

	return 0;
}
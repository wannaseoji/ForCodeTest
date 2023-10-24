
#include <iostream>
#include <string>
#include <cmath> 
#define MAX 999999
//예제입력 3에서 500000으로 가는 경우 1,5을 제외한 모든 숫자가 고장남
//11117이 나오려면, 511111(6번) -를 11111번 눌러야함
// MAX가 500000보단 크다는 결론.
// 999999
//그럼 5까지 고장났다면>> 100 에서 500000까지 가는게 빠른지 
using namespace std;

int n;
bool state[10];
//0. 0인 경우 0.
//1. 처음부터 +,-로만 이동하는 경우와 비교
//2. 어디까지 이동한 다음 + 혹은 -로 이동하는 경우와 비교
//ans = min(1,2);

bool check(int num) {
    if (num == 0) {
        if (state[0] == false) return false;
        else return true;
    }
    while (num) {
        if (state[num % 10] == false) return false;
        num /= 10;
    }
    return true;
}


int getMin(int num)
{
    int minPressCnt = MAX, pressCnt;
    for (int i = 0; i <= MAX; i++) {
        if (check(i)) {
            pressCnt = to_string(i).length();
            pressCnt += abs(i - num);
            minPressCnt = min(minPressCnt, pressCnt);
        }
    }
    return min(abs(num - 100), minPressCnt);
}

int main(void)
{
    int m, tmp;
    cin >> n >> m;
    for (int i = 0; i < 10; i++) state[i] = true; // init
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        state[tmp] = false;
    }
    cout << getMin(n) << '\n';
    return 0;
}
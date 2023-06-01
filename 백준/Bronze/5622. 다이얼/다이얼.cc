#include<iostream>

using namespace std;

int main() {
    string s;
    string al[] = { "ABC", "DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ" };

    cin >> s;
    int index = 0;
    int cnt = 0;

    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < al[j].length(); k++)
            {
                if (al[j][k] == s[i]) {
                    index = j;
                    cnt += index+3;
                }
            }
            
        }
    }
    cout << cnt;
    return 0;
}
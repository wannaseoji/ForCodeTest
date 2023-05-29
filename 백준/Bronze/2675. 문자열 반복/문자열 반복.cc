#include<iostream>

using namespace std;

int main() {
    int n,r;
    string s;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        string ns;
        cin >> r;
        cin >> s;
        for (int k = 0; k < s.length(); k++) {
            for (int j = 0; j < r; j++) {
                ns += s[k];
            }
        }
        cout << ns<<"\n";
    }

  
    return 0;
}
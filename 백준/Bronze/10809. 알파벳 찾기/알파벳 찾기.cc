#include<iostream>

using namespace std;

int alpha[26];
int main() {
    string s;
    cin >> s;

  
    for (int i = 0; i < 26; i++) {
       alpha[i]=-1;
    }
    for (int i = 0; i < s.length(); i++) {
        if (alpha[s[i] - 97] != -1)continue;
        alpha[s[i] - 97] = i;
    }
    for (int i = 0; i < 26; i++) {
        cout << alpha[i]<< " " ;
    }
    return 0;
}
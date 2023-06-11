#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    int k = 1;
    cin >> s;
   // cout << s.length();
    
    
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s[i] != s[s.length() - i-1])
                k = 0;
        }
    
 
    cout << k;
}
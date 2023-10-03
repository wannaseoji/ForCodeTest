#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    int N;
    while (1) {
        cin >> N;
        bool ans = true;
        if (N == 0)break;
        string n_N = to_string(N);
        string o_N = to_string(N);
        reverse(n_N.begin(), n_N.end());

        for (int i = 0; i < n_N.length(); i++) {
            if (n_N[i] != o_N[i])
                ans = false;
            

        }
        if(ans)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }




    return 0;
}
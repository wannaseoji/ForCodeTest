#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    map<string, int> m;
    vector<string> v;
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N+M; i++) {
        string name;
        cin >> name;
        m[name]++;
        if (m[name] > 1)
            v.push_back(name);
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (auto o : v)
        cout << o << '\n';

}
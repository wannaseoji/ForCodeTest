#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

vector<string> s;

map<int, vector<string>> m;
vector<vector<string>> v;

void filter1() {
    for (int i = 0; i < s.size(); i++) {
        m[s[i].length()].push_back(s[i]);
        //v[s[i].length()].push_back(s[i]);
    }
    for(auto iter = m.begin();iter!=m.end();iter++)
        for (int i = 0; i < iter->second.size(); i++) {
            cout << iter->second[i] << '\n';
        }
    /*
    //filter2()각각 원소에 대해서 sort
    for(int i =0; i<v.size(); i++){
        sort(v[i].begin(), v[i].end());
    }
    //출력
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << endl;
        }
    }*/

}

int main() {
    int N;// 입력받을 단어의 개수
    cin >> N;
    string k;
    for (int i = 0; i < N; i++) {
        cin >> k;
        s.push_back(k);
    }
    //unique(s.begin(), s.end());
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    filter1();//길이별 filter
    

}
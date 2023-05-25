#include<iostream>

using namespace std;

int main(){
    int f;
    string a;
    cin >> f;
    
    for(int i =0; i<f; i++){
        cin >> a;
        cout << a[0] << a[a.length()-1]<<endl;
    }
    
    return 0;
}
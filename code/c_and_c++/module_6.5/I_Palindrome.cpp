#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    string reversed = s;
    reverse(reversed.begin(), reversed.end());

    if(reversed == s){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, word;

    getline(cin, s);

    stringstream ss(s);

    bool flag = false;

    while(ss >> word){
        if(word == "Jessica"){
            flag = true;
        }
    }

    if(flag){
        cout << "YES" <<endl;
    }else{
        cout << "NO" << endl;
    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;

    cin >> str;

    while(true){
        int idx = str.find("EGYPT");


        if(idx == -1){
            break;
        }

        str.replace(idx, 5, " ");
    }

    cout << str;
    return 0;
}
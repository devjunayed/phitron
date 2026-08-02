#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        stack<char> stk;
        for(char ch: s){
            if(!stk.empty() && stk.top() != ch){
                stk.pop();
            }else{
                stk.push(ch);
            }
        }

        if(stk.empty()){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        

    }
    return 0;
}
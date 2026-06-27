#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;

        int leftSum = 0, rightSum = 0;

        for(int i = 0; i < 3; i++){
            leftSum += str[i] - '0';
            rightSum += str[i+3] - '0';
        }

        if(leftSum == rightSum){
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}
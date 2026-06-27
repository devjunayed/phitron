#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        bool flag = 0;
        int n, s;
        cin >> n >> s;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                for(int k = j+1; k < n ; k++){
                    if(arr[i] + arr[j] + arr[k] == s){
                        flag = 1;
                    }
                }
            }
        }

        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
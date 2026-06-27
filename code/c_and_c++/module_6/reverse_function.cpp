#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }


    reverse(a, a+n);

    for(int arr: a){
        cout << arr <<endl;
    }

    return 0;
}
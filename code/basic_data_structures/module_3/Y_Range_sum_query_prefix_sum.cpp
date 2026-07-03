#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<long long int> v(n+1);
    for(int i = 1; i <= n; i++){

        cin >> v[i];
    }

    sort(v.begin() -1, v.end());
    vector<long long int> prefix_sum(n+1);
    prefix_sum[1] = v[1];
    for(int i = 1; i <=n; i++){
        prefix_sum[i] = prefix_sum[i-1] + v[i];
    }

  

    while(q--){
        int l, r;
        cin >> l >> r;

        if( l != 1){
          cout <<  prefix_sum[r] - prefix_sum[l-1] << endl;
        }else{
            cout << prefix_sum[r] << endl;
        }
       
    }
    return 0;
}   
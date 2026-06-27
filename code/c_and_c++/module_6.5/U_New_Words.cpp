#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;

    int eCnt = 0, gCnt = 0, yCnt = 0, pCnt = 0, tCnt = 0;


    for(char ch: s){
        if(ch == 'e' || ch == 'E'){
            eCnt++;
        }else if(ch == 'g' || ch == 'G'){
            gCnt++;
        }else if(ch == 'y' || ch == 'Y'){
            yCnt++;
        }else if(ch == 'p' || ch == 'P'){
            pCnt++;
        }else if(ch == 't' || ch == 'T'){
            tCnt++;
        }
    }

    int minCount = min({eCnt, gCnt, yCnt, pCnt, tCnt});

    cout << minCount;
        
    return 0;
}
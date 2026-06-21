#include<bits/stdc++.h>
using namespace std;

int main(){
    string str, word;
    cin >> str;

    int endFlag = 0;
    
    while(true){
        int startPos = -1;

        for(int i = 0; i+4 < str.size(); i++){
            if(str[i] == 'E' && str[i+1] == 'G' && str[i+2] == 'Y' && str[i+3] == 'P' && str[i+4] == 'T'){
                startPos = i;
                break;
            }

            
          
        }
        if(startPos == -1){
            break;
        }
        str.replace(startPos, 5, " ");
    }
    

    cout << str << endl;

    return 0;
}
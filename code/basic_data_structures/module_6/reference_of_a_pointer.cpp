#include<bits/stdc++.h>
using namespace std;

void fun(int* &p){
    // chaging like this also modified main
    // *p = 200;

    // this one modified main becasue of int* &p
    int y = 200;
    p = &y;
    cout << "In fun: " << *p << endl;
}

int main(){
    int x = 10;
    int* p = &x;

    fun(p);
    cout << "In Main : " << *p <<endl;
    return 0;
}
#include<iostream>
#include<iomanip> // for manipulating precision
using namespace std;

int main(){
    double d = 23.4567;

    cout << fixed << setprecision(4) << d << endl;

    return 0;
}
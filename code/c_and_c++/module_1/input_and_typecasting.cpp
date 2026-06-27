#include<iostream>
using namespace std;
int main(){
    int x;
    char c;
    double d;
    cin >> x >> c >> d;
    int ascii = c;
    
    cout << x << " " << c << endl << d << endl;
    cout << "ASCII of " << c << " is " << ascii << endl;
    cout << "ASCII of " << c << " is " << (int) c << endl;

    int y = 65;
    cout << (char)y << endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    char s[100];

    // fgets(s, 100, stdin);
    // must use to handle an error and it ignore a value input which is enter
    cin.ignore();
    cin.getline(s, 100);
    cout << x << endl << s << endl;


    string str;
    cin >> str;

    cout << str << endl;

    return 0;
}
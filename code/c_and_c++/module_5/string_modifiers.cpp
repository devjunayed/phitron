#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    // s+= " World";
    // s.append(" : tough world");
    // s.push_back('A');
    // s.pop_back();

    // s = "Gello";

    // s.assign("Gelloo");

    // s.erase(3, 1);

    s.replace(5, 0, "World");

    cout << s << endl;
    return 0;
}
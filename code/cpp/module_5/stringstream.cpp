#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    int count = 0;
    while (ss >> word)
    {
        cout << word << endl;
        count++;
    }

    cout << "Total Words: " << count << endl;

    return 0;
}
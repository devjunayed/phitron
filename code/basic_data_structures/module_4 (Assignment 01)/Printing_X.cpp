#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int mid = (n - 1) / 2;
    int innerSpace = n - 2;
    int outerSpace = 0;
    for (int i = 0; i < mid; i++)
    {
        for (int k = outerSpace; k > 0; k--)
        {
            cout << " ";
        }
        cout << "\\";
        for (int j = innerSpace; j > 0; j--)
        {
            cout << " ";
        }
        cout << "/";
        innerSpace -= 2;
        outerSpace++;
        cout << endl;
    }

    for (int k = outerSpace; k > 0; k--)
    {
        cout << " ";
    }
    cout << "X";

    cout << endl;

    outerSpace--;
    innerSpace+=2;
    for (int i = 0; i < mid; i++)
    {
        for (int k = outerSpace; k > 0; k--)
        {
            cout << " ";
        }
        cout << "/";
        for (int j = innerSpace; j > 0; j--)
        {
            cout << " ";
        }
        cout << "\\";
        innerSpace += 2;
        outerSpace--;
        cout << endl;
    }
    return 0;
}
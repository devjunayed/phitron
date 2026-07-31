#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 20, 10, 60, 50};

    // l.remove(10);

    // l.sort();
    // l.sort(greater<int>()); // descending

    // l.sort();
    // l.unique(); // must be sorted first to remove duplicate

    // l.reverse();

    

    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}
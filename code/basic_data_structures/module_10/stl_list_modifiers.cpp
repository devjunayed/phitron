#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60 , 70};
    // list<int>l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end());

    // l.push_back(40);
    // l.push_front(0);

    // l.pop_back();
    // l.pop_front();

    // l.insert(next(l.begin(), 2), 100);
    // l.erase(next(l.begin(), 2), next(l.begin(), 4));

    // replace(l.begin(), l.end(), 20, 100);

    // auto it = find(l.begin(), l.end(), 20);
    // if(it == l.end()){
    //     cout << "Not found" << endl;
    // }else{
    //     cout << "Found" << endl;
    // }

    // cout << *next(l.begin(), 2);

    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    cout << v.size() << endl;

    cout << v.capacity() << endl;
    v.push_back(6); 

    // capacity get double when capacity is crossed
    cout << v.capacity() << endl;

    cout << v.max_size() << endl;

    // does not clear value from memory just size is cleared
    v.clear();

    cout << v.size() << endl;

    // value is sitll accessible even after clear
    cout << v[2] << endl;


    v = {1, 2, 3, 4, 5};
    v.resize(3);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    v.resize(7, 100);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
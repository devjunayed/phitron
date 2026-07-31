#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList;

    // list<int> myList(10, 4);

    // vector<int> v= {10, 20, 30};
    // list<int> myList(v.begin(), v.end());

    int arr[] = {40, 50, 60};
    list<int> myList(arr, arr+ sizeof(arr)/4);


    // myList.clear();// clear all


    // if(myList.empty()){
    //     cout << "Empty" << endl;
    // }


    myList.resize(5);

    for (list<int>::iterator it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << endl;
    }

    cout << myList.size() << endl;
    
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // cout << *myList.begin() << endl;

    return 0;
}
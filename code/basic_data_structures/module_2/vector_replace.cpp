#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // replace(v.begin(), v.end()-1, 2, 100);

    // only iterator value not index
    vector<int> ::iterator it =  find(v.begin(), v.end(), 4);


    if(it == v.end()){
        cout << "Not found" ;
    }else{
        cout << "Found";
    }

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
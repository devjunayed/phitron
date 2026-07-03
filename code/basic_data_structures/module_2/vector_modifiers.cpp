#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    vector<int> v2;
    v2 = v;

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    v2.push_back(4);
    v2.pop_back();

    v2.insert(v2.begin()+4, 6);

    vector<int> v3 = {7, 8, 0};
    v2.insert(v2.end(), v3.begin(), v3.end());

    v2.erase(v2.begin()+2, v2.begin()+5);

    for(int x: v2){
        cout << x << " ";
    }

    cout << endl;



    return 0;
}
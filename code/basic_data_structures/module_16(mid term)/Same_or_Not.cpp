#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stk;
    queue<int> qu;

    long long int n, m;
    cin >> n >> m;

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    long long int maxSize = max(m, n);

    while (n--)
    {
        int x;      



        
        cin >> x;
        stk.push(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    bool flag = false;
    while (!qu.empty() && !stk.empty())
    {
        if (qu.front() == stk.top())
        {
            qu.pop();
            stk.pop();
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
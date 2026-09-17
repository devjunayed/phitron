#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    queue<int> order;
    for (int i = 0; i < q; i++)
    {

        int type;
        cin >> type;

        if (type == 1)
        {
            int x;
            cin >> x;
            order.push(x);
        }

        if (type == 2)
        {
            if (!order.empty())
            {
                cout << order.front() << endl;
                order.pop();
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
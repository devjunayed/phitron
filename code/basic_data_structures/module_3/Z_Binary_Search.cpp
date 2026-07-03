#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;

    cin >> n >> q;
    vector<int> A(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    sort(A.begin() -1, A.end());

    while (q--)
    {
        int flag = 0;
        int x;
        int l = 1;
        int r = n;
        cin >> x;

        while (l <= r)
        {
            int mid_index = (l + r) / 2;
            if (A[mid_index] == x)
            {
                flag = 1;
                break; 
            }
            else if (A[mid_index] > x)
            {
                r = mid_index - 1;
            }
            else
            {
                l = mid_index + 1;
            }
        }

        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
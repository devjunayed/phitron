#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int arr[n+1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<long long int> v;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            v.push_back(arr[i]);
        }
    }

    sort(v.begin(), v.end(), greater<long long int>());

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] = v.back();
            v.pop_back();
        }
    }

    long long int max_sum = 0;
    for (int i = 1; i < n; i++)
    {
        max_sum = max(max_sum, (arr[i] + arr[i + 1]));
    }
    cout << max_sum << endl;
    return 0;
}
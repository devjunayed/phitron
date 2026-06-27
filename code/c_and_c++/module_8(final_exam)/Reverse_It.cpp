#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student st[n];

    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id;
    }

    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        char tmp = st[i].s;

        st[i].s = st[j].s;

        st[j].s = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << endl;
    }
    return 0;
}
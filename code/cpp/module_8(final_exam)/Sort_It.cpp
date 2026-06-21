#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks, eng_marks;
};

bool cmp(Student l, Student r)
{
    if (l.eng_marks + l.math_marks > r.eng_marks + r.math_marks)
    {
        return true;
    }else if(l.eng_marks + l.math_marks == r.eng_marks + r.math_marks){
        if(l.id < r.id){
            return true;
        }else {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    Student st[n];

    for (int i = 0; i < n; i++)
        {
            cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
        }

        sort(st, st + n, cmp);

        for (int i = 0; i < n; i++)
        {
            cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " "
                 << st[i].id << " " << st[i].math_marks << " " << st[i].eng_marks << endl;
        }
    
    return 0;
}
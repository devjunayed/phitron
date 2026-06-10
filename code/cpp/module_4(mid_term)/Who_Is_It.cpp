#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;

};

int
main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student st1, st2, st3, highest_mark;

        cin >> st1.id >> st1.name >> st1.section >> st1.total_marks;
        cin >> st2.id >> st2.name >> st2.section >> st2.total_marks;
        cin >> st3.id >> st3.name >> st3.section >> st3.total_marks;

        if (st1.total_marks >= st2.total_marks && st1.total_marks >= st3.total_marks)
        {
           
                highest_mark = st1;
            
        }
        else if (st2.total_marks >= st1.total_marks && st2.total_marks >= st3.total_marks)
        {
          
                highest_mark = st2;
            
        }else{
            highest_mark = st3;
        }


        cout << highest_mark.id << " " << highest_mark.name << " "  << highest_mark.section << " " << highest_mark.total_marks << endl;
    }
    return 0;
}
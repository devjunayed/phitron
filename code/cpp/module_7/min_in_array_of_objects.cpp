#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int marks;
    int roll;

   
};

int
main()
{
    int n ;
    cin >> n;
    
    Student a[n];
    
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin , a[i].name);
        cin >>  a[i].roll >> a[i].marks;
    }
   
    Student mn;
    mn.marks = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i].marks < mn.marks){
            mn = a[i];
        }
    }

    cout << mn.name << endl;

    return 0;
}
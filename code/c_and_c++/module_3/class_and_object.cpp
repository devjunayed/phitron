#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    double gpa;
};

int main()
{
    Student st;
    Student arr[4];


    for(int i = 0; i < 4; i++){
        cin.getline(arr[i].name, 100);
        cin >> arr[i].gpa >> arr[i].roll;
        cin.ignore();
    }

    for(int i = 0; i < 4; i++){
        cout << arr[i].name << " " << arr[i].gpa << " " << arr[i].roll << endl;
    }
    // char temp[100] =  "Junayed";
    // strcpy(st.name, temp);
    // st.roll = 5;
    // st.gpa = 3.35;
    
    // cout << st.name[1] << endl;
    // cout << st.roll << endl;
    // cout << st.gpa << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student (int roll, int cls, double gpa){

        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun(){
    // dynamic object
    Student* karim = new Student(2, 5, 5.2);
    return karim;
}

int main(){
    // static object
    Student rahim(45, 5, 3.42);

    // point to dynamic object
    Student* p = fun();


    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}
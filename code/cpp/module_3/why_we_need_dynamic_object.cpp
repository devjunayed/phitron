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
    Student karim(3, 2, 3.20);
    Student* p = &karim;
    return p;
}

int main(){
    Student rahim(45, 5, 3.42);
    Student* p = fun();



    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}
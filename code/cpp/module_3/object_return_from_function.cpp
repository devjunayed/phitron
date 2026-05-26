#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student (int roll, int cls, double gpa){

        // this is same as below
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).gpa = gpa;

        // same as above but shorter way
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun(){
    Student karim(2, 5, 5.00);
    return karim;
}

int main(){
    Student rahim(45, 5, 3.42);
    Student obj = fun();



    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}
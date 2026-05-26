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

int main(){
    Student rahim(45, 5, 3.42);
    // rahim.roll = 45;
    // rahim.cls = 5;
    // rahim.gpa = 3.20;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    return 0;
}
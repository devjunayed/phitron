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



int main(){
    // static object
    Student rahim(45, 5, 3.42);

    // dynamic object
    Student* karim = new Student(10, 5, 4.56);


    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;

    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;
    return 0;
}
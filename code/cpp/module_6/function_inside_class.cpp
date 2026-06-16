#include<bits/stdc++.h>
using namespace std;


class Student{
    public:
    string name;
    int roll;
    Student(string name, int roll){
        this->name = name;
        this->roll = roll;
    }
    void hello(){
        cout << "Hello from " << name << endl;
    }
};

int main(){
    Student sakib("Sakib Ahmed", 23);
    sakib.hello();

    Student rakib("Rakib Ahmed", 25);
    rakib.hello();

    return 0;
}
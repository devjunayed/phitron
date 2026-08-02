#include <bits/stdc++.h>
using namespace std;


class Stack{
    public: 
        list<int> li;

        void push(int val){
            li.push_back(val);
        }

        void pop(){
            li.pop_back();
        }

        int top(){
            return li.back();
        }
        int size(){
            return li.size();
        }
        bool empty(){
            return li.empty();
        }
};

class Queue{
    public: 
        list<int> li;

        void push(int val){
            li.push_back(val);
        }

        void pop(){
            li.pop_front();
        }

        int front(){
            return li.front();
        }
        int size(){
            return li.size();
        }
        bool empty(){
            return li.empty();
        }
        int back(){
            return li.back();
        }
};


int main()
{
    Stack stk;
    Queue qu;

    long long int n, m;
    cin >> n >> m;

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    long long int maxSize = max(m, n);

    while (n--)
    {
        int x;      
        
        cin >> x;
        stk.push(x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        qu.push(x);
    }

    bool flag = false;
    while (!qu.empty() && !stk.empty())
    {
        if (qu.front() == stk.top())
        {
            qu.pop();
            stk.pop();
            flag = true;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
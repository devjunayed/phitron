#include<bits/stdc++.h>
using namespace std;

class VectorStack{
    public:
        vector<int> v;
        void push(int val){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }

        int top(){
            return v.back();
        } 

        int size(){
            return v.size();
        }

        bool empty(){
            return v.empty();
        }
        
};

int main(){
    VectorStack stack;

    int n;
    cin >> n;

    for(int i = 0; i < n ;i ++){
        int x;
        cin >> x;

        stack.push(x);
    }


    stack.pop();

    while(!stack.empty()){
        cout << stack.top() << endl;
        stack.pop();
    }


    // stack.push(10);
    // stack.push(20);
    // stack.push(30);

    // if(!stack.empty()){

    //     stack.pop();
    // }
    // if(!stack.empty()){

    //     stack.pop();
    // }
    // if(!stack.empty()){

    //     stack.pop();
    // }

    // if(!stack.empty())
    //     cout << stack.top() << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int  val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->prev = tail;

    tail->next = newnode;
    tail = newnode;
}

void print(Node* &head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
    
}

void reverse_linked_list(Node* &head, Node* &tail){
    for(Node* i = head, *j = tail; i != j && i->prev !=j; i= i->next, j= j->prev){
        swap(i->val, j->val);
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(cin >> val){
        if(val == -1){
            break;
        }
        insert_at_tail(head, tail, val);
    }



    reverse_linked_list(head, tail);
    print(head);
    cout << head->val << endl;
    // cout << head->next->next->val << endl;
    return 0;
}
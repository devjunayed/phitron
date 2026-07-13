#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int  val){
        this->val = val;
        this->next = NULL;
    }
};


void insert_at_tail(Node* &head, Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
    }
    tail -> next = newNode;
    tail = newNode;
}


void printll(Node* tmp){
    if(tmp == NULL){
        return;
    }
    cout << tmp -> val <<endl;
    printll(tmp->next);
}


void delete_tail(Node* head, Node* tail){
    Node* tmp = head;
    // for(int i = 0; i < idx -1; i++){
    //     tmp = tmp -> next;
    // }

    while(tmp != NULL){
        tmp = tmp->next;
    }
    Node* deleteNode = tmp -> next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;
    
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    
    int val;
    while(true){
        cin >> val;
        if(val == -1 ){
            break;
        }
        insert_at_tail(head, tail, val);
    }
    delete_tail(head, tail);
    printll(head);

    return 0;
}
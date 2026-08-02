#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* &head, Node* &tail){
    Node* tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp ->next;
    }
    cout << endl;
    
}
void print_backward(Node* &head, Node* &tail){
    Node* tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp ->prev;
    }
    cout << endl;
    
}

void insert(Node *&head, Node *&tail, int idx, int val, int &elCnt)
{
    Node *newnode = new Node(val);

    if (idx > elCnt)
    {
        cout << "Invalid" << endl;
        return;
    }

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        elCnt++;
        print_forward(head, tail);
        print_backward(head, tail);
        return;
    }

    if (idx == 0)
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        elCnt++;

    }else if(idx == elCnt){
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        elCnt++;
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i < idx; i++)
        {
            tmp = tmp->next;
        }
        newnode->next = tmp->next;
        tmp->next->prev = newnode;
        newnode->prev = tmp;
        tmp->next= newnode;
        elCnt++;
    }
    print_forward(head, tail);
    print_backward(head, tail);

}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int elCnt = 0;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;
        insert(head, tail, x, v, elCnt);
    }
    return 0;
}
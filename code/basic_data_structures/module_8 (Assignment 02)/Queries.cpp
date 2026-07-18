#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *new_node = new Node(v);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head = new_node;
}

void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *new_node = new Node(v);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = tail->next;
}

void delete_at(Node *&head, Node *&tail, int idx)
{

    Node *tmp = head;
    Node *cnttmp = head;

    int cnt = 0;
    while(cnttmp != NULL){
        cnttmp = cnttmp -> next;
        cnt++;
    }

    if(idx > cnt-1){
        return;
    }
   
    if(idx == 0){
        head = tmp->next;
        delete tmp;
        return;
    }

    for (int i = 0; i < idx - 1; i++)
    {   
        tmp = tmp->next;
    }
    Node *delete_node = tmp->next;
    tmp->next = tmp->next->next;

    if(delete_node == tail){
        tail = tmp;
    }

    delete delete_node;
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    while (q--)
    {

        int x, v;
        cin >> x >> v;

        switch (x)
        {
        case 0:
            insert_at_head(head, tail, v);
            break;
        case 1:
            insert_at_tail(head, tail, v);
            break;
        case 2:
            delete_at(head, tail, v);
            break;
        }
        print(head);

        cout << endl;
    }
    return 0;
}
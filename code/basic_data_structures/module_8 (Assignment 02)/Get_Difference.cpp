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

void input(Node *&head, Node *&tail)
{
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
        }else{

            tail->next = new_node;
            tail = new_node;
        }
    }
}

void print(Node *head, Node *tail)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int get_min(Node *head)
{
    int min_val = INT_MAX;
    for (Node *i = head; i != NULL; i = i->next)
    {
        min_val = min(min_val, i->val);
    }
    return min_val;
}
int get_max(Node *head)
{
    int max_val = INT_MIN;
    for (Node *i = head; i != NULL; i = i->next)
    {
        max_val = max(max_val, i->val);
    }
    return max_val;
}



int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    input(head, tail);
    cout << get_max(head) - get_min(head) <<endl;
    // print(head, tail);
    return 0;
}
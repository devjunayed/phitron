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
        }
        else
        {

            tail->next = new_node;
            tail = new_node;
        }
    }
}

int search(Node *head)
{

    int v;
    cin >> v;

    Node *tmp = head;
    int idx = 0;
    bool isFound = false;

    while (tmp != NULL)
    {
        if (tmp->val == v)
        {
            isFound = true;
            break;
        }
        idx++;
        tmp = tmp->next;
    }
    if (!isFound)
    {
        idx = -1;
    }
    return idx;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        input(head, tail);

        cout << search(head) << endl;
    }
    return 0;
}
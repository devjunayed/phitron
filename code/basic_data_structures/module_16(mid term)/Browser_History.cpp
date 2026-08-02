#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void tail_insert(Node *&head, Node *&tail, string s)
{
    Node *newnode = new Node(s);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;


    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
        {
            break;
        }
        tail_insert(head, tail, s);
    }

    int q;
    cin >> q;
    cin.ignore();

    Node *tmp = head;

    while (q--)
    {
        string cmd;
        getline(cin, cmd);

        stringstream ss(cmd);
        string firstWord, lastWord;

        ss >> firstWord;
        ss >> lastWord;

        if (firstWord == "visit")
        {
            Node* tmpSearch = head;
            bool found = false;
            while (tmpSearch != NULL)
            {
                if (tmpSearch->val == lastWord)
                {
                    found = true;
                    tmp = tmpSearch;
                    cout << tmp->val << endl;
                    break;
                }
                tmpSearch = tmpSearch->next;
            }
            if(!found){
                cout << "Not Available" << endl;
            }

            // for (int i = 0; i < cnt; i++)
            // {
            //     tmp = tmp->next;
            //     if (tmp->val == lastWord)
            //     {
            //         cout << tmp->val << endl;
            //         break;
            //     }
            // }
            // if (tmp == NULL)
            // {
            //     cout << "Not Available" << endl;
            // }
        }
        else if (cmd == "prev")
        {
            if (tmp->prev != NULL)
            {
                tmp = tmp->prev;
                cout << tmp->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else
        {
            if (tmp->next != NULL)
            {
                tmp = tmp->next;
                cout << tmp->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
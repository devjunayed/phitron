#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void right_outer_tree(Node *r_node)
{
    vector<int> v;
    if (r_node == NULL)
    {
        return;
    }
    while (r_node != NULL)
    {
        v.push_back(r_node->val);
        if (r_node->right)
        {
            r_node = r_node->right;
        }
        else
        {
            r_node = r_node->left;
        }
    }
    for (auto it : v)
    {
        cout << it << " ";
    }
}
void left_outer_tree(Node *l_node)
{
    vector<int> v;

    if (l_node == NULL)
    {
        return;
    }
    while (l_node != NULL)
    {
        v.push_back(l_node->val);
        if (l_node->left)
        {
            l_node = l_node->left;
        }
        else
        {
            l_node = l_node->right;
        }
    }
    reverse(v.begin(), v.end());

    for (auto it : v)
    {
        cout << it << " ";
    }
}

int main()
{
    Node *root = input_tree();
    left_outer_tree(root->left);
    cout << root->val << " ";
    right_outer_tree(root->right);
    return 0;
}
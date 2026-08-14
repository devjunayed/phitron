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

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
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

        f->left = myLeft;
        f->right = myRight;

        if (f->left != NULL)
        {
            q.push(f->left);
        }

        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
    return root;
}

int count_levels(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }

    int l = count_levels(root->left);
    int r = count_levels(root->right);

    return max(l, r) + 1;
}

void x_level_nodes(Node *root, int x)
{
    int level = 0;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int sz = q.size();
        vector<int> v;
        for (int i = 0; i < sz; i++)
        {
            Node *f = q.front();
            q.pop();

            if (level == x)
                v.push_back(f->val);
            if (f->left != NULL)
                q.push(f->left);
            if (f->right != NULL)
                q.push(f->right);
        }

        if (level == x)
        {
            for (auto it : v)
            {
                cout << it << " ";
            }
            break;
        }
        level++;
    }
}

void level_nodes(Node *root)
{
    int x;
    cin >> x;

    if (count_levels(root) < x)
    {
        cout << "Invalid" << endl;
        return;
    }

    x_level_nodes(root, x);
}

int main()
{
    Node *root = input_tree();
    level_nodes(root);
    return 0;
}
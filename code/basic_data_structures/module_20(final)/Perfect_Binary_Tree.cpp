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

int total_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if(root->left == NULL && root->right == NULL){
        return 1;
    }

    int l = total_nodes(root->left);
    int r = total_nodes(root->right);

    return (l + r) + 1;
}


int max_depth(Node* root){
    if(root == NULL){
        return 0;
    }

    if(root->left == NULL && root->right == NULL){
        return 1;
    }

    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return max(l, r) + 1;
}

bool is_perfect_tree(Node *root)
{
    int tn = total_nodes(root);
    int md = max_depth(root);

    return (pow(2, md) - 1) == tn;
}

int main()
{
    Node *root = input_tree();
    if (is_perfect_tree(root))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
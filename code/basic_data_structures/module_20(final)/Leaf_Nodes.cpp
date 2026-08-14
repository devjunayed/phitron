#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int  val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* input_tree(){
    int val;
    cin >> val;
    Node* root = new Node(val);
    queue<Node*> q;

    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;


        Node* myLeft, *myRight;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;


        if(f->left != NULL){
            q.push(f->left);
        }

        if(f->right != NULL){
            q.push(f->right);
        }
    }
    
    return root;
}


int leaf_descending_print(Node* root){

    if(root == NULL){
        return 0;
    }

    queue<Node *> q;
    vector<int> v;
    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        if(f->left == NULL && f->right == NULL){
            v.push_back(f->val);
        }

        if(f->left != NULL){
            q.push(f->left);
        }

        if(f->right != NULL){
            q.push(f->right);
        }
    }
    
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    for(auto it: v){
        cout << it  << " " ;
    }
    cout << endl;
    return 0;
}

int main(){
    Node* root = input_tree();
    leaf_descending_print(root);
    return 0;
}
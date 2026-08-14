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

    while(!q.empty()){
        // 1. ber kore ana
        Node* f = q.front();
        q.pop();

        // 2. oi node ke niye kaj
        int l, r;
        cin >> l >> r;

        Node* myLeft, * myRight;

        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        // 3. children push kora
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
    return root;
}


int count_nodes(Node* root){
    if(root == NULL){
        return 0;
    }

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l+r+1;
}

int count_leaf_nodes(Node* root){
    if(root == NULL){
        return 0;
    }

    if(root -> left == NULL && root ->right == NULL){
        return 1;
    }
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return l+r;
}


int max_height(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root -> left == NULL && root->right == NULL){
        return 0;
    }

    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}

int main(){
    Node* root = input_tree();
    // cout << "Nodes : " <<  count_nodes(root)  << endl;    
    // cout << "Leaf Nodes: " <<  count_leaf_nodes(root) << endl;    

    cout << max_height(root) << endl;
    return 0;
}
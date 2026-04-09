#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node *root = NULL;

node* insert(node *root, int data){
    if(root == NULL){
        node *temp = new node();
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    else if(data < root->data){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}
node *searching;

void inorder(node *root){
    if(root != NULL){
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
    return;
}

void preorder(node *root){
    if(root != NULL){
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
        
    }
    return;
}

void postorder(node *root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
    return;
}

int main()
{
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}
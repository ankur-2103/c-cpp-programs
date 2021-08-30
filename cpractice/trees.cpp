#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* newnode(int data){
    node* temp = new node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node* insert(node* root, int data){
    // node* newNode = newnode(data);
    node* x = root;
    node* y = NULL;
    while(x != NULL){
        y = x;
        if(data <= x->data){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    
    if(y == NULL){
        y = newnode(data);
    }else if(data <= y->data){
        y->left = newnode(data);
    }else{
        y->right = newnode(data);
    }

    return y;
}

void Inorder(node* root)
{
    if (root == NULL)
        return;
    else {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}

void Preorder(node* root){

    if(root == NULL){
        return;
    }else{
        cout << root->data << " ";
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Postorder(node* root){

    if(root == NULL){
        return;
    }else{
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << " ";
    }
}

void Levelorder(node* root){

    if(root == NULL)return;
    queue<node*>Q;
    Q.push(root);

    while(!Q.empty()){
        node* curr = Q.front();
        cout << curr->data <<" ";
        if(curr->left != NULL)Q.push(curr->left);
        if(curr->right != NULL)Q.push(curr->right);
        Q.pop();
    }
}

bool IsBST(node* root, int minV, int maxV){

    if(root == NULL)return true;
    if(root->data >= minV && root->data <= maxV  && 
        IsBST(root->left, minV, root->data) && 
        IsBST(root->right, root->data, maxV)){
        return true;
    }else{
        return false;
    }
}

node* FindMin(node* root){
    while(root->left != NULL)root = root->left;
    return root;
}

node* Delete(node* root, int data){
    if(root == NULL)return root;
    else if(data < root->data)root->left = Delete(root->left, data);
    else if(data > root->data)root->right = Delete(root->right, data);
    else{
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }else if(root->left == NULL){
            node* temp = root;
            root = root->right;
            delete temp;
        }else if(root->right == NULL){
            node* temp = root;
            root = root->left;
            delete temp;
        }else{
            node* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}

int main(){
    node* root = NULL;
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 25);
    insert(root, 15);
    insert(root, 50);
    insert(root, 15);
    insert(root, 10000);
    insert(root, -1);
    insert(root, 3);
    insert(root, 0);
    cout << "Inorder : ";
    Inorder(root);
    cout << endl;
    root = Delete(root, 10);
    cout << "After Deleting Inorder : ";
    Inorder(root);
    cout << endl;
    cout << "Preorder : ";
    Preorder(root);
    cout << endl;
    cout << "Postorder : ";
    Postorder(root);
    cout << endl;
    cout << "Levelorder : ";
    Levelorder(root);
    cout << endl;
    cout << "BST : ";
    if(IsBST(root, INT_MIN, INT_MAX)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
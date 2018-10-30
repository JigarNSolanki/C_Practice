#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node* newnode(int key){
    node* n = new node;
    n->data = key;
    n->left = NULL;
    n-> right = NULL;
    return n;
}

void insert(node* &root, int key){
    if(root==NULL){
        root = newnode(key);
        return;
    }
    if(key< root->data){
        insert(root->left, key);
    }
    else{
        insert(root->right,key);
    }
}


void inorder(node* root){
    if(root ==NULL){
        return;
    }
    inorder(root->left);
    inorder(root->right);
    cout << root->data << endl;
}


int main(){
    node* root = NULL;
    int keys[] = {5,3,4,1,6,8};
    for(int i=0;i<6;i++){
        insert(root,keys[i]);
    }
    
    inorder(root);
    return 0;
}

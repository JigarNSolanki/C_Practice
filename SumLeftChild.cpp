/*Given a binary tree find the sum of all those leaf nodes which are left child of their parent and have right sibling.*/

#include<iostream>
#include<bits/stdc++.h>
#include<list>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* newnode(int key){
    Node* temp = new Node;
    temp->data = key;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int leftchild(Node* node){
    int x=0;
    if((node->left->left == NULL) && (node->left->right == NULL)){
            if(node->right != NULL)
                x = node->left->data;
            if((node->right->left == NULL) && (node->right->right == NULL))
                return x;
            else
            return x + leftchild(node->right);
    }
    return x + leftchild(node->left) + leftchild(node->right); 
}

int main(){
    int sum = 0;
    Node* root = new Node;
    root-> data = 1;
    root->left = newnode(3);
    root->right = newnode(5);
    root->left->left = newnode(7);
    root->left->right = newnode(8);
    root->right->left = newnode(6);
    root->right->right = newnode(3);
    cout<<leftchild(root)<<endl;
    return 0;
}

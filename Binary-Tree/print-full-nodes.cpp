#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};

void PrintFullNode(struct Node *root)
{
    if(root!=NULL)
    {
        PrintFullNode(root->left);
        if(root->left!=NULL && root->right!=NULL)
        {
            cout<<root->data<<" ";
        }
        PrintFullNode(root->right);
    }
}

int main()
{
    struct Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right->left = new Node(7);
    PrintFullNode(root);
    return 0;
}
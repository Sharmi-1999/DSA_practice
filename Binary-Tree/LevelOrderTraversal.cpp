// Time Complexity: O(n)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};

int LevelOrder(struct Node *root)
{
    if(root==NULL)
        return 0;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node *node = q.front();
        cout<<node->data<<" ";
        q.pop();
        if(node->left!=NULL)
            q.push(node->left);
        if(node->right!=NULL)
            q.push(node->right);
    }
    return 0;
        
}

int main() {
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    LevelOrder(root);
    return 0;
}
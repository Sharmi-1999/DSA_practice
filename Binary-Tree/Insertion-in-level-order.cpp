// Time Complexity: O(n)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
        int data;
        struct Node *left,*right;
        Node(int val){
            data = val;
            left = right =NULL;
        }
    };

void InOrder(struct Node *root)
{
    if(root==NULL)
        return;
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

struct Node *Insertion(struct Node *root,int key)
{
    if(root== NULL)
    {
        root = new Node(key);
        return root;
    }
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if(node->left!=NULL)
            q.push(node->left);
        else
        {
            node->left = new Node(key);
            return root;
        }
        if(node->right!=NULL)
            q.push(node->right);
        else
        {
            node->right = new Node(key);
            return root;
        }
    }
    return root;
}

int main() {
    Node *a = new Node(1);
    
    a->left = new Node(2);
    a->right = new Node(3);
    a->left->left = new Node(4);
    a->right->left = new Node(6);
    a->right->right = new Node(7);
    cout<<"Before Insertion: ";
    InOrder(a);
    cout<<endl;
    int key = 5;
    a = Insertion(a,key);
    cout<<"After Insertion: ";
    InOrder(a);
    cout<<endl;

}
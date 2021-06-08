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

bool CheckDuplicate(struct Node *root,unordered_set<int> &s){
    if(root==NULL)
        return false;
    if(s.find(root->data)!=s.end())
        return true;
    s.insert(root->data);
    return (CheckDuplicate(root->left,s) || CheckDuplicate(root->right,s)); 
}

int main() {
    Node *a = new Node(1);
    
    a->left = new Node(2);
    a->right = new Node(3);
    a->right->right = new Node(2);
    unordered_set<int> s;
    if(CheckDuplicate(a,s))
        cout<<"Duplicate is present"<<endl;
    else
        cout<<"Duplicate is not present"<<endl;


}
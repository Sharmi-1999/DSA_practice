// using recursion (Time Complexity: O(n))

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

bool CheckMirror(struct Node *a,struct Node *b){
    if(a==NULL && a==NULL)
        return true;
    if(a==NULL || b==NULL)
        return false;
   return (a->data == b->data && CheckMirror(a->left,b->right) && CheckMirror(a->right,b->left));
}


int main() {
    Node *a = new Node(1);
    Node *b = new Node(1);
    a->left = new Node(2);
    a->right = new Node(3);
    a->left->left  = new Node(4);
    a->left->right = new Node(5);
 
    b->left = new Node(3);
    b->right = new Node(2);
    b->right->left = new Node(5);
    b->right->right = new Node(4);
    bool res=CheckMirror(a,b);
    if(res)
        cout<<"Two trees are mirror image";
    else
        cout<<"Two trees are not mirror image";
}


// using Level Order Traversal (Time Complexity: O(n))

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

// void LevelOrder(struct Node *root)
// {
//     if(root==NULL)
//         return;
//     queue<Node *> q;
//     q.push(root);
//     while(!q.empty())
//     {
//         Node *node = q.front();
//         cout<<node->data<<" ";
//         q.pop();
//         if(node->left!=NULL)
//             q.push(node->left);
//         if(node->right!=NULL)
//             q.push(node->right);
//     }
// }

bool IfMirror(struct Node *a,struct Node *b)
{
    if(a==NULL && b==NULL)
        return true;
    if(a==NULL || b==NULL)
        return false;
    queue<Node *> q;
    q.push(a);
    q.push(b);
    while(!q.empty())
    {
        Node *a=q.front();
        q.pop();
        Node *b=q.front();
        q.pop();
        if(a->data!=b->data)
            return false;
        if(a->left && b->right)
        {
            q.push(a->left);
            q.push(b->right);
        }
        else if(a->left || b->right)
            return false;
        if(a->right && b->left)
        {
            q.push(a->right);
            q.push(b->left);
        }
        else if(a->right || b->left)
            return false;
    }
    return true;
}

int main() {
    Node *a = new Node(1);
    Node *b = new Node(1);
    
    a->left = new Node(3);
    a->right = new Node(2);
    a->right->left = new Node(5);
    a->right->right = new Node(4);
    
    b->left = new Node(2);
    b->right = new Node(3);
    b->left->left = new Node(4);
    b->left->right = new Node(5);
    // LevelOrder(a);
    if(IfMirror(a,b))
        cout<<"Two trees are mirror image"<<endl;
    else
        cout<<"Two trees are not mirror image"<<endl;

}
#include<bits/stdc++.h>
using namespace std ;

class Node{
    public :
    int data ;
    Node *left;
    Node *right ;

    Node(int val){
        data = val ;
        left = NULL;
        right = NULL;
    }
};

Node * BuildTree(){

    cout<<"Enter  Root Value :";
    int val ;
    cin>>val;

    if(val == -1) return NULL;

    Node *root = new Node(val);

    queue<Node*> q ;
    q.push(root);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        cout<<"enter the left Child of :"<<temp->data<<" :";
        int leftVal;
        cin>>leftVal;

        if(leftVal  != -1){
            temp->left = new Node(leftVal);
            q.push(temp->left);
        }

        cout<<"Enter the right child of :"<<temp->data <<" :";
        int rightVal;
        cin>>rightVal;

        if(rightVal  != -1){
            temp->right = new Node(rightVal);
            q.push(temp->right);

        }
    }

    return root ; 


}

void preorder(Node *root){
    if(root == NULL) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root){
    if(root == NULL) return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node *root){
    if(root == NULL) return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){  

    Node *root = BuildTree();

    cout<<"\nPreOrder:";
    preorder(root);

    cout<<"\nInorder:";
    inorder(root);

    cout<<"\nPostorder:";
    postorder(root);
}



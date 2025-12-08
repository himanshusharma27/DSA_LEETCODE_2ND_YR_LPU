#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

class Node{

    public :

    int data ;
    Node *left ;
    Node *right ;

    Node(int val){
        data = val ;
        left = NULL;
        right = NULL;
    }
};

Node *insertNode(Node *root , int val){

    if(root ==NULL ) return new Node(val);

    if(val < root->data){
       root->left =  insertNode(root->left , val);
    }
    else{
       root->right =  insertNode(root->right, val);
    }
    return root ;

}

bool search(Node *root , int key){
    if(root->data == key) return true;
    if(key < root->data) {
        return search(root->left , key);
    }   
    else{
        return search(root->right , key );
    }
}

void inorder(Node *root ){
    if(root == NULL) return ;
    inorder(root->left);
    cout<<root->data<<" "; 
    inorder(root->right);
}

void preorder(Node *root){
    if(root == NULL) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root){
    if(root == NULL) return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

Node *findMin(Node *root){
    while(root->left != NULL){
        root = root->left;
    }
    return root ;
}

Node *deleteNode(Node * root, int key ){

    if(root == NULL) return NULL;

    if(key<root->data){
        root->left = deleteNode(root->left, key);
    }else if(key>root->data){
        root->right = deleteNode(root->right, key);
    }else{
        if(root->left == NULL && root->right == NULL){
            return NULL;
        }
        else if(root->left == NULL){
            Node *temp = root->right;
            delete root ;
            return temp;
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }

        Node *temp = findMin(root->right);
        root->data = temp->data;

        root->right = deleteNode(root->right , temp->data);
    }

    return root ;

}



int main(){
    Node *root = NULL;

    int n ;
    cout<<"enter no of nodes:";
    cin>>n;

    cout<<"Values enters please:";
    for(int i = 0 ; i<n ;i++){
        int x ;
        cin>>x;
        root = insertNode(root , x);
    }

    int key ;
    cout<<"enter key :";
    cin>>key;
    if(search(root, key)){
        cout<<"it is  present ";
    }
    else{
        cout<<"Not present :";
    }

    int del;
    cout<<"enter the delete node : ";
    cin>>del;

    root = deleteNode(root, del);


        cout<<"\nInorder";
    inorder(root);

    cout<<"\npreorder:";
    preorder(root);

    cout<<"\npostorder:";
    postorder(root);

}

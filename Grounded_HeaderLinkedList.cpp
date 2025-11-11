#include<iostream>
using namespace std ;

struct Node{
    int data ;
    Node *next ;
};

Node *createHeaderNode(){
    Node * header = new Node;
    header->next= NULL;
    return header ;
}

void insertionAtBegining(Node *header , int data){
    Node *newNode = new Node ;
    newNode->data = data;
    newNode->next = header->next;
    header->next = newNode;
}

void insertionAtEnd(Node *header , int data){
    Node *temp = header;
    while(temp->next != NULL){
        temp = temp->next;
    } 
    Node *newNode = new Node ;
    newNode->data = data ;
    newNode->next = NULL;
    temp->next = newNode;
}

void display(Node *header){
    Node *temp = header->next;
    if(temp == NULL){
        cout<<"List is empty ";
        return ;
    }
    while(temp != NULL){
        cout<<temp->data <<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}


void deleteAtFirst(Node *header){
    if(header->next == NULL){
        cout<<"List is empty";
    }
    Node *temp = header->next;
    header->next = temp->next;
    delete temp ;
}


void deleteAtLast(Node *header){
    if(header->next == NULL){
        cout<<"List is Empty";
        return ;
    }

    Node *temp = header->next;
    Node *prev = header;

    while(temp->next != NULL){
        prev = temp ;
        temp = temp->next;
    }
    prev->next = NULL;
    delete temp ;
}


int main(){
    Node *header = createHeaderNode();

    insertionAtBegining(header, 20);
    insertionAtEnd(header, 45);

    deleteAtFirst(header);
    deleteAtLast(header);

    cout<<"linkedList : "<<endl;
    display(header);
}

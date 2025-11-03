#include<iostream>
using namespace std ;

struct Node{
    int data;
    Node *next ;
};


void insertAtFirst(Node *&head , int newData){
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head ;
      head = newNode;
}


void insertionAtEnd(Node *head , int newData){
    Node *newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL;


    while(head == NULL){
        head = newNode;
        return ;
    }
    Node *temp = head ;
    while(temp->next != NULL){
        temp = temp->next ;
    }
    temp->next = newNode;
}

void deleteAtFirst(Node *&head){  // DeleteAtFirst
    if(head == NULL) return ;
    Node *temp = head ;
    head = head->next;
    delete temp ;
}

void deleteAtEnd(Node *&head){
    if(head == nullptr) return ;
    if(head->next == nullptr){
        delete head ;
        head = nullptr;
        return ;
    }
    Node *temp = head ;
    while(temp->next->next != nullptr){ 
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

}



void printList(Node *head){
    Node *temp = head ;
    while(temp!=NULL){
        cout<<temp->data << "->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}


int main(){
    Node *head = new Node();   
    Node *second = new Node();
    Node *third = new Node();

    head->data = 23 ;
    head->next = second;

    second->data = 11;
    second->next = third ;

    third->data = 89;
    third->next = NULL;

    
    insertAtFirst(head , 12);

    


    insertionAtEnd(head , 87);

    deleteAtFirst(head);

    deleteAtEnd(head);
    deleteAtEnd(head);
    
    printList(head);
}

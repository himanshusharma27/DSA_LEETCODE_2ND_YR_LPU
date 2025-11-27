

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int x){
        data = x ;
        next = NULL;
    }
};

class Queue{
    Node *front ;
    Node *rear;

    public:

    Queue(){
        front = rear = NULL;
    }

    void enqueue(int x){
        Node *temp = new Node(x);
        if(rear == NULL){
            front = rear = temp ;
            return ;
        }
        rear->next = temp;
        rear = temp ;

    }

    void dequeue(){
        if(front == NULL){
            cout<<"Queue is Empty\n";
            return ;
        }
        Node *temp = front ;
        front = front->next;
        cout<<"Deleted "<<temp->data<<endl;
        delete temp;

        if(front == NULL){
            rear = NULL;
        }
    }

    void display(){
        Node *temp = front;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

    
};


int main(){
    Queue q ;
    q.enqueue(23);
    q.enqueue(45);
    q.enqueue(89);

    q.display();
}

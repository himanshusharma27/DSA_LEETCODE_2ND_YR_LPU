#include<iostream>
using namespace std;

class Queue{
private:
int arr[100];
int front , rear ;

public:

Queue(){ // Empty
    front = -1;
    rear = -1 ;    
}

void Enqueue(int x){
    if(rear == 99){
        cout<<"Queue is overlaoded\n";
        return ;
    }
    if(front == -1) front = 0 ;
    arr[++rear] = x ;
    cout<<x<<"Inserted / Enqueue in the Queue\n";
}

void Dequeue(){
    if(front == 1 || front > rear ) {
        cout<<"Queue is underFlow\n";
        return ;
    } 
    cout<<arr[front]<<"Dequeue"<<endl;
    front++;
}

int peek(){
    if(front == -1 || front > rear){
        cout<<"Queue is Empty\n";
        return -1;
        }
        return arr[front];
}

bool isEmpty(){
    return (front == -1 || front > rear);
}
};

int main(){
    Queue q ;
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);

    cout<<"Front element "<< q.peek()<<endl;
6
    q.Dequeue();

    cout<<"After the dequeue the front element "<<q.peek();
}

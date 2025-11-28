#include<iostream>
using namespace std;

class Deque{
    private :
    int *arr;
    int front , rear , size , cap;

    public :
    Deque(int c){
        cap = c ;
        arr = new int[c];
        front = -1 ;
        rear = -1 ;
        size = 0 ;
    }

    bool isFull(){
        return size == cap;
    }

    bool isEmpty(){
        return size == 0 ;
    }

    void pushFront(int x){
        if(isFull()){
            cout<<"deque is  full";
            return 0 ;
        }
        if(front == -1){
            front = rear = 0 ;
        }else if(front == 0 ){
            front = cap-1;
        }else{
            front --;
        }
        arr[front] = x;
        size++;
    }


    void pushBack(int x){
        if(isFull()){
            cout<<"deque is Full\n";
            return ;
        }
        if(rear == -1){
            front = rear = 0;
        }else if(rear == cap - 1){
            rear = 0 ;
        }else{
            rear++;
        }
        arr[rear] = x;
        size++;
    }

    void popFront(){
        if(isEmpty()){
            cout<<"Deque is Empty\n";
            return ;
        }
        if(front == rear) {
            front = rear - 1;
        }
        else if(front == cap - 1){
            front = 0 ;
        }
        else{
            front++;
        }
        size--; 
    }

    void popBack(){
        if(isEmpty()){
            cout<<"Deque is Empty\n";
            return ;
        }
        if(front == rear ){
            front = rear - 1;
        }else if (rear == 0)
        {
            rear = cap -1;
        }
        else{
            rear--;
        }
        size--;
    }

    int getFront(){
        if(isEmpty()){
            cout<<"deque is Empty\n";
            return -1;
        }
        return arr[front];
    }

    int getRear(){
        if(isEmpty()){
            cout<<"dequee is empty\n";
            return -1;
        }
        return arr[rear];
    }

};

int main(){
    Deque dq[5] ;

    dq.pushFront(12);
    dq.pushBack(34);
    dq.pushFront(11);
    dq.pushBack(67);

    cout<<"front element of deque :"<<dq.getFront()<<endl;
    cout<"Rear element of deque :"<<dq.getRear()<<endl; 
}

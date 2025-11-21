#include<iostream>
using namespace std ;

class Node{
public :

int data ;
Node *next ;

    Node(int x ){
        data = x ;
        next = NULL;
    }
};  

class Stack{

    private :
    Node *top ;

    public:

        Stack(){
            top == NULL;
        }


        void push(int x){
            Node *temp = new Node(x);
            temp->next = top ;
            top = temp ;
            cout<<x<< "pushed into the stack\n ";
        }

        void pop(){
            if(top == NULL){
                cout<<"Stack is UnderFlow\n";
                return ;
            }

            Node *temp = top ;
            cout<<temp->data<<" popped from the stack \n";
            top = top->next;
            delete temp ;
        }
  
        int peek(){
            if(top == NULL){
                cout<<"Stack is empty\n";
                return -1;
            }
            return top->data;
        }

        bool isEmpty(){
            return top == NULL;
        }
};

int main(){
    Stack s1 ;
    s1.push(23);
    s1.push(11);
    s1.push(1);

    cout<<"TOP ELEMENT OF THE STACK "<<s1.peek()<<endl;

    s1.pop();
    s1.pop();

    cout<<"TOP ELEMENT AFTER POP "<<s1.peek()<<endl;
}

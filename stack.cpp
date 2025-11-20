#include<iostream>

using namespace std ;

class Stack{

    private :

    int arr[100];
    int top ;

    public:

        Stack(){
            top = -1 ;
        }


    void push(int x ){
        if(top == 99){    // Non -empty
            cout<<"Stack is OverFlow \n";
            return;
        }
        arr[++top] = x ;   // Empty - push 
        cout<< x <<" Pushed the stack \n "; 
    }

    int  pop(){
  
        if(top == -1){        // Empty 
            cout<<"Stack is UnderFlow \n";
            return -1;
        } 

        int x = arr[top--];   // Non-empty 
        return x ;
    }


    int  peek(){
        if(top == -1){
            cout<<"Stack is empty \n";
            return -1 ;
        }
        return arr[top];
    }

    bool isEmpty(){
        return top == -1;
    }

    bool isFull(){
        return top == 99;
    }


};

int main(){
    Stack st ;
    st.push(29);
    st.push(12);
    st.push(15);

    cout<<"Top Element "<<st.peek()<<endl ;

    cout<<" Pop "<<st.pop()<<endl;;

    cout<<"POP "<<st.pop()<<endl;

    cout<<"POP "<<st.pop()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is now Empty\n ";
    }
}

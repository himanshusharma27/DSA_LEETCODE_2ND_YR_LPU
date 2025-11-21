#include<iostream>
#include<stack>

using namespace std ;

string reverseString(string s){
    stack<char> st;

    for(char ch : s){
        st.push(ch);
    }

    string rev = " ";
    while(!st.empty()){
        rev += st.top();
        st.pop();
    }
    return rev ;
}

int main(){
    string s ;
    cout<<"Enter a string :";
    getline(cin , s);
    cout<<"Reversed string :"<<reverseString(s)<<endl;
}

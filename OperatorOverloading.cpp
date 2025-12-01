#include<iostream>
using namespace std ;

class Complex{
    private :
int real ;
int imag;


public :

    Complex(int r = 0 , int i = 0 ){
        real  = r ;
        imag = i ;
    }

    Complex operator+(Complex c){     ///  Complex sum(complex c){         }
        Complex temp ;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp ;
    }

    void display(){
        cout<<real <<" + "<<imag<<"i\n"; 
    }
};

int main(){
    Complex c1(3,5) , c2(4, 8);

    Complex c3 = c1+c2;  // c3 = c1.sum(c2); = c3 = c1 + c2 
    c3.display();
// }

//-------------------------------------------------------------------------------------------------
//Multiply  two complex numbers ......   

#include<iostream>
using namespace std ;

class Text{
    private :
    int x ;

    public :

    Text(int x = 0 ){
        this->x = x;
    }

    bool operator==(Text t){
        return x = t.x;
    }
};

int main(){  
    Text a(10) , b(10) , c(30);

    if(a==b){cout<<"Equal\n";}
    else{cout<<"Not Equal";}
    if(a==c){cout<<"Equal";}
    else{cout<<"Not Equal\n";}
}

//---------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std ;

class Complex{
public :
int r , i;

Complex(int r = 0 , int i = 0): r(r), i(i){

}

Complex operator*(Complex c){
    int real = r*c.r - i*c.i;
    int img = r*c.i - i*c.r;
    return Complex(real,img);
}

};

int main(){
    Complex c1(3,2), c2(1,7);
    Complex c3 = c1 * c2;
    cout<<c3.r<< "+"<<c3.i<< "i";
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std ;
class Number{
int x ;
public :
Number(int x = 0 ):x(x){}

Number operator++(){   // operator(sign)
    ++x;
    return *this;
}
void show(){
    cout<<x<<endl;
}
};
int main(){
    Number n(5);
    ++n;
    n.show();
}

//Home work : craete a subtract operator overlaoding .....

//-----------------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std ;

class Array{
    int arr[5];

    public :

    Array(){
        for(int i = 0 ; i<5 ;i++) arr[i]= i+1;
    }

    int operator[](int index){
        if(index<0 || index >= 5){
            cout<<"Index out of bound\n";
            return -1;
        }
        return arr[index];
    }
};

int main(){
    Array a ;
    cout<<a[2];
}
//--------------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std ;

class Call{
    public :

    void operator()(string name){
        cout<<" Hii "<<name;
    }
};

int main(){
    Call c;
    c("Himanshu");
}

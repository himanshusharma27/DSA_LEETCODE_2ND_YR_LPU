#include<iostream>
using namespace std ;

class HashTable{
    int size;
    int *table;

    public :
        
    HashTable(int s){
        size = s ;
        table = new int[size];
        for(int i = 0 ; i<size ; i++){
            table[i] = -1;
        }
    }

        int hashFunction(int key){
            return key % size;
        }
        void insert(int key){
            int index = hashFunction(key);

            while(table[index] != -1){
                index = (index + 1 ) % size;  // linear probuing 
            }
            table[index] = key;
        }
        void display(){
            for(int i = 0 ; i<size ; i++){
                cout<<i<<" -> "<<table[i]<<endl;
            }
        }
    


};

int main(){

    HashTable h(5);
    h.insert(10);
    h.insert(15);
    h.insert(20);
    h.insert(25);


    h.display();
}


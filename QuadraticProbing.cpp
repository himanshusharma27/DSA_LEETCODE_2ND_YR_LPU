#include<iostream>
using namespace std ;

class HashTable{
    int size;
    int* table;

    public:

    HashTable(int s ){
        size = s ;
        table = new int[size];
        for(int i = 0 ; i<size ; i++){
            table[i] = -1 ;
        }
    }
    
    int HashFunction(int key){
        return key % size;
    }

    void insert(int key){
        int index = HashFunction(key);

        if(table[index] == -1){
            table[index] = key;
            return ;
        }
        for(int i = 1 ; i<size ; i++){
            int newIndex = (index + i *i) % size;
            if(table[newIndex] == -1){
                table[newIndex] = key;
                return ;  
            }
        }
    }

    void display(){
        for(int i = 0 ; i<size; i++){
            cout<<i<<"->"<<table[i]<<endl;
        }
    }
};

int main(){
    HashTable ht(7);
    ht.insert(12);
    ht.insert(11);
    ht.insert(20);
    ht.insert(30);
    ht.insert(17);

    ht.display();
}

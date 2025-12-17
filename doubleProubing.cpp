#include<iostream>
#include<vector>

using namespace std ;

class HashTable{
    int size;
    int prime;
    vector<int> table;

    public :

    HashTable(int s){
        size = s ;
        prime = getPrimeBelow(size);
        table.resize(size , -1);
    }

    int hash1(int key){
        return  key % size;
    }

    int hash2(int key){
        return prime - (key %  prime);
    }

    int getPrimeBelow(int n){
        for(int i = n-1 ; i>=2 ; i--){
            if(isPrime(i)){
                return i;
            }
        }
        return 2 ;
    }

    bool isPrime(int n ){
        if(n<=1) return false;
        for(int i = 2 ; i*i <= n ; i++){
            if(n%i==0)
                return false;
            return true;
        }
    }

    void insert(int key){
        int index = hash1(key);
        int step = hash2(key);

        for(int i = 0 ; i<size; i++){
            int newIndex = (index + i * step) % size;

            if(table[newIndex] == -1){
                table[newIndex]  = key;

                return ;
            }
        }

        cout<<"Hash table is full "<<key<<endl;
    }

    void display(){
        for(int i = 0 ; i<size; i++)
            cout<<i<<"->"<<table[i]<<endl;
    }


};

int main(){
    HashTable ht(10);
    ht.insert(10);
    ht.insert(20);
    ht.insert(30);
    ht.insert(25);
    ht.insert(35);

    ht.display();
}

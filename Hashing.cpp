#include<bits/stdc++.h>
using namespace std;

class HashTable{

    public:

    int size;

    vector<vector<int>> table;

    HashTable(int s){
        size = s ;
        table.resize(size);
    }

    int hashfunction(int key){
            return key % size;
    }

    void insert(int key){
        int index = hashfunction(key);
        table[index].push_back(key);
    }

    bool search(int key){
        int index = hashfunction(key);
        for(int x : table[index]){
            if(x==key) return true;
        }
        return false;
    }
    void display(){
        for(int i = 0 ; i< size; i++){
            cout<<i<<" -> ";
            for(int x : table[i]) cout<<x << " ";
        }
        cout<<endl;
    }
};

int main(){
    HashTable ht(7);

    ht.insert(10);
    ht.insert(20);
    ht.insert(15);
    ht.insert(7);

    ht.display();

    cout<<"serach 20 "<<ht.search(20)<<endl;


}

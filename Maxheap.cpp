#include<bits/stdc++.h>
using namespace std ;

class MaxHeap{
public :

    vector<int> heap;

    void insert(int val){
        heap.push_back(val);

        int i = heap.size()-1;

        while(i>0){
            int parent = (i-1)/2;
            if(heap[parent] < heap[i]){
                swap(heap[parent] , heap[i]);
                i= parent ;
            }else break;
        }
    }

    void deleteRoot(){

        if(heap.empty()) return ;

        heap[0] = heap.back();
        heap.pop_back();
        int i = 0 ;
        int n = heap.size();

        while(true){
            int left = 2 * i + 1 , right = 2 * i + 2 ;
            int largest  = i ;

            if(left < n && heap[left] > heap[largest])
                largest = left ;

            if(right < n && heap[right] > heap[largest])
                largest = right;

            if(largest != i){
                swap(heap[i] , heap[largest]);
                i= largest;
            } else break;

            
        }
    }

    void print(){
        for(int x : heap) cout<<x << " ";
        cout<<endl;
    }
    
};

int main(){
    MaxHeap h ;
    h.insert(89);
    h.insert(78);
    h.insert(34);
    h.insert(31);

    h.print();

    h.deleteRoot();

    h.print();
}

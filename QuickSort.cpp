#include<iostream>
#include<vector>
using namespace std ;

int partition(vector<int>&a, int l , int r){
    int pivot = a[r];
    int i = l-1;

    for(int j = 1 ; j<r ; j++){
        if(a[j]<pivot){
            i++;
            swap(a[i] , a[j]);
        }
    }
    swap(a[i+1] , a[r]);
    return i+1;
}

void quicksort(vector<int>&a, int l , int r){
    if(l<r){
        int pi = partition(a, l,r);
         quicksort(a, l , pi-1);
         quicksort(a, pi+1, r);
        
    }

}

int main(){
    vector<int>a = { 33 , 12 , 45 , 9};

    quicksort(a, 0 , a.size()-1);

    for(int x : a ) cout<< x<<"  ";

    
}

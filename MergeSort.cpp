#include<iostream>
#include<vector>
using namespace std ;

void MergeSort(vector<int>&a , int l , int r){   // [ 2 , 4 , 5 , 6 ,7, 9 ]
    if(l>=r) return ;

    int mid = l+(r-l)/2;

    MergeSort(a , l , mid);  // [ 2 , 4, 5 ]
    MergeSort(a, mid+1 , r);   // [ 6 , 7, 9 ]

    vector<int>temp;

    int i = l , j = mid +1 ;

    while(i<=mid && j<=r)
        temp.push_back(a[i]<a[j] ? a[i++] : a[j++]);  // if(a[i]<a[j]){ a[i++]   else a[j++]}

    while(i<=mid ) temp.push_back(a[i++]);

    while(j<=r) temp.push_back(a[j++]);


    for(int k = 0 ; k<temp.size(); k++){
        a[l+k] = temp[k];
    }

}


int main(){
    vector<int>a = {45 , 2 , 21 , 11};
    MergeSort(a, 0 , a.size()-1);

    for(int x : a){
        cout<<x<< " ";
    }
}

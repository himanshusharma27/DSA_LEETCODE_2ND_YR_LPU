#include<stdio.h>


// decending order selection sort 

void SelectionSort(int arr[], int n){
    for(int i = 0 ; i< n-1 ; i++){
        int minIdx = i ;
        for(int j = i+1 ; j<n ; j++){
          //  if(arr[j]>arr[minIdx]){       // decending ( arr[j] > arr[mindx]) 
           //     minIdx = j;
          //  }

            if(arr[j]< arr[minIdx]){      // ascending order 
                minIdx = j ;
            }
            // swap 
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp ;
        }
    }
}
// array print function 
void printArray(int arr[] , int n){
    for(int i = 0 ; i< n ; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n ");
}

int main(){


    // elements ........

    int n ;
    printf("enter the size");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    

    //int n = sizeof(arr)/ sizeof(int);

    printf("Orignal array :");

    printArray(arr , n);


    SelectionSort(arr , n);
    printf("Sorted arrary ");
    printArray(arr, n );

}

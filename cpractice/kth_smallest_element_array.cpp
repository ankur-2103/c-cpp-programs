#include <iostream>
using namespace std;

void swap(int *x, int *y){  
    int t = *x;
    *x = *y;
    *y = t;
}

int partition(int arr[], int l, int r){
    int p = arr[r];
    int i = l;
    for(int j=l;j<r;j++){
        if(arr[j]<=p){
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}

void quickSort(int arr[], int l, int r){
   
    if(l < r){
       int pi = partition(arr, l, r);
       quickSort(arr, l, pi-1);
       quickSort(arr, pi+1, r);
    }
    
}


int kthSmallestElement(int arr[], int k){
    return arr[k-1];
}

int main(){
    int arr[] = {1,2,5,3,5,4,5,7,5,};
    quickSort(arr, 0, 9);
    for(int i=0; i<9; i++){
        cout << arr[i];
    }
    cout << kthSmallestElement(arr, 3);
    return 0;
}

// Given an array arr[] and a number K where K is smaller than size of array, 
// the task is to find the Kth smallest element in the given array. 
// It is given that all array elements are distinct.
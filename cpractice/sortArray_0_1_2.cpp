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


int main(){
    int arr[]= {0, 2, 1, 2, 0};
    quickSort(arr, 0, 4);
    for(int i=0; i<5; i++){
        cout << arr[i];
    }
    return 0;
}
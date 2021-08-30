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

int main()
{
    int arr[] = {100, 25, 50, 10};0
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Given array : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    quickSort(arr, 0, n-1);
    
    cout << "\nAfter sorting of array : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}

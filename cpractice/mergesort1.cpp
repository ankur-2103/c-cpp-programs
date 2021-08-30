/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r){
    
    int F[r-l];
    
    int i=l;
    int j=m+1;
    int k=l;
    
    while(i<=m && j<=r){
        if(arr[i]<arr[j]){
            F[k]=arr[i];
            i++;
        }else{
            F[k]=arr[j];
            j++;
        }
        k++;
    }
    
    while (i <= m) {
        F[k] = arr[i];
        i++;
        k++;
    }
 
    while (j <= r) {
        F[k]=arr[j];
        j++;
        k++;
    }
    
    for(int i=0;i<=r-l;i++){
        arr[i]=F[i];
    }
}

void mergeSort(int arr[], int l, int r){
    if(l>=r){
        return;
    }
    int m =l+ (r-l)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
    
}

int main()
{
    int arr[] = {100,345,1,34,28};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Given array : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    mergeSort(arr, 0, n-1);
    
    cout << "\nAfter sorting of array : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}

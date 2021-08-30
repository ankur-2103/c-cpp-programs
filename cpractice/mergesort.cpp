/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r){
    
    int n1 = m-l+1;
    int n2 = r-m;
    
    int L[n1], R[n2];
    
    for(int i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    
    for(int j=0;j<n2;j++){
        R[j]=arr[m+1+j];
    }
    
    int i=0;
    int j=0;
    int k=l;
    
    while(i<n1 && j<n2){
        if(L[i]<R[j]){
            arr[k]=L[i];
            i++;
        }else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
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

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void leftShift1(int arr[], int n){
    int temp = arr[0];
    
    for(int i =0; i <n; i++){
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void leftshift(int arr[], int d, int n){
    for(int i = 0; i < d; i++){
        leftShift1(arr, n);
    }
}

void printarray(int arr[], int n){
    cout << "\nElements in array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i]; 
    }
}

int main()
{
    int d= 2;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << n;
    printarray(arr, n);
    leftshift(arr, d, n);
    printarray(arr, n);
    return 0;
}

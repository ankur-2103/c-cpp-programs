/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void swap(int *x, int *y){
    
    int a = *x;
    *x = *y;
    *y = a;
    
}

void bubbleSort(int arr[]){
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

}

int main()
{
    int arr[10] = {65, 48, 32, 98, 100, 23, 56, 11, 78, 1};
    
    cout << "Given array : ";
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    
    bubbleSort(arr);
    
    cout << "\nAfter sorting of array : ";
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

void swap(int *x, int *y){
    
    int a = *x;
    *x = *y;
    *y = a;
    
}

void bubbleSort(vector<int> &a){
    
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size()-i-1;j++){
            if(a.at(j)>a.at(j+1)){
                swap(&a.at(j), &a.at(j+1));
            }
        }
    }

}

int main()
{
    vector<int> a;
    int n;
    
    cout << "Enter the size of the vector : ";
    cin >> n;
    
    int input;
    cout << "Enter the elements of vector : " << endl;
    for(int i=0;i<n;i++){
        cin >> input;
        a.push_back(input);
    }
    
    cout << "\nBefore sorting of vector : ";
    for(auto i = a.begin(); i != a.end(); i++){
        cout << *i << " ";
    }
    
    bubbleSort(a);
    
    cout << "\nAfter sorting of array : ";
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    
    return 0;
}

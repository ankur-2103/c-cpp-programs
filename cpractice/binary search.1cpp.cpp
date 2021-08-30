/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_s(vector<int> a, int x, int y, int d){
    int b = -1;
    if (y >= x) { 
        int m = x+y / 2; 
        if (a[m] == d){ 
            return m; 
        }
        if (a[m] > d){ 
            return binary_s(a, x, m - 1, d);
        }
        return binary_s(a, m + 1, y, d); 
    } 
    return b; 
}

int main()
{
    vector<int> a;
    int n;
    int l =0;
    //int r = n-1;
    int d;
    int input;
    int m;
    int result = -1;
    
    cout << "Enter size of vector : ";
    cin >> n;
    int r = n-1;
    
    cout << "Enter elements of vector : " << endl;
    for(int i =0; i<n; i++){
        cin >> input;
		a.push_back(input);
    }
    
    sort(a.begin(), a.end());
    
    cout << "Sorted elements : ";
    for(auto i = a.begin(); i != a.end(); i++){
        cout << *i << " ";
    }
    
    cout<< "\nEnter element to search in vector : ";
    cin >> d;
    while (l <= r) {
        m = (l+r)/2;
        if(a[m] == d){
            result = m;
            break;
        }
        if(a[m]>d){
            r=m-1;
        }
        if(a[m]<d){
            l=m+1;
        }
    } 
    
    if(result == -1){
        cout << "Element is not present in vector";
    }else{
        cout << "Element present in vector at index : " << result;
    }

    return 0;
}

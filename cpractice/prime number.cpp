/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int prime(int n){
    int flag = 0;
    for(int i =2; i<= n/2; i++){
        if(n%i==0){
            flag = 1;
            return flag;
        }
    }
    return flag;
}

int main()
{
    int n;
    cout<<"Enter a positive integer : ";
    cin >> n;
    
    if(n==1){
        cout << "1 is nethier prime nor composite";
        return 0;
    }
    
    int a = prime(n);
    
    if(a){
        cout << n << " is not a prime number";
    }else{
        cout << n << " is prime number";
    }

    return 0;
}

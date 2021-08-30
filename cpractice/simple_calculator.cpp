/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    char i;
    cout<<"Enter 1 number : ";
    cin >> a;
    cout<<"\nEnter operator : ";
    cin >> i;
    cout<<"\nEnter 2 number : ";
    cin >> b;
    if(i=='+'){
        c = a+b;
        cout<<"Calculated output is : "<<c;
    }else if(i=='-'){
         c = a-b;
        cout<<"Calculated output is : "<<c;
    }else if(i=='/'){
         c = a/b;
        cout<<"Calculated output is : "<<c;
    }else{
        c=a%b;
        cout<<"Calculated output is : "<<c;
    };

    return 0;
}

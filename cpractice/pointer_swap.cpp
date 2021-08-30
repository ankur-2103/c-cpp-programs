/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a[4] = {1,2,3,4};
    int *p = a;
    
    int t;
    for(int i=3;i>1;i--){
        t = p[i];
        p[i] = p[3-i];
        p[3-i]=t;
    }
    
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
    
    
    
    
    
    
   // cout << p+1<< endl;
    //cout << *p+1;
   /* int *b[4];
    for(int i =0 ;i<4;i++){
        b[i] = p+i;
       // cout << *p+i << "=";
        //cout << b[i] << endl;
    }
    
    int *t;
    for(int i=3;i>1;i--){
        b[i] = t;
        b[4-i] = b[i];
        t = b[i];
        cout << b[i];
    }
    
    for(int i=0;i<4;i++){
       // cout << *p+i << "=";
    }*/
    
    

    return 0;
}
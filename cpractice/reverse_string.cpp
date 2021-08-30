/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
    char str[100];
   // string b = " ";
    int i, j;
    
    cout << "Input : ";
    gets(str);
    //strcat(" ", str);
    int pos = strlen(str)-1;
    cout << "Output :";
    for(i = strlen(str); i >= 0; i--){
        if(str[i]== ' ' && str[i-1]!= ' '||i==0){
            for(j=i; j<= pos; j++){
                cout<<str[j];
            }
            pos = i-1;
        }
    }
    
    return 0;
}
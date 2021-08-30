/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>

using namespace std;

string reverse_word(char str[100]){
    int i;
    char b;
    int n = strlen(str);
    int a = n-1;
    float q = a/2;
    round(q);
    for(i = a;i > q; i--){
        b=str[n-(i+1)];
        str[n-(i+1)]=str[i];
        str[i]=b;
    }
    return str;
}

int main()
{
    char str[100];
    cout<<"Input word : ";
    cin.getline(str, 100);
    char c[100];
    int n = strlen(str);
    int pos = 0;
    int n_s=0;
    for(int i=0;i<=n;i++){
        if(str[i]==' '){
            n_s++;
        }
    }
    cout<< "Output word : " ;
    for(int i =0;i<=n_s;i++){
        for(int j=pos,a=0;j<=n-1,a<=n-1;j++,a++){
              if(str[j]==' '){
                 pos = j+1;
                  break;
                }
                char m = str[j];
                c[a] = m;
            }
             cout<<reverse_word(c)<<" ";
             int y = strlen(c);
             for(int i=0;i<y;i++){
                 int x = strlen(c);
                 for(int j=0;j<x;j++){
                     c[j]=c[j+1];
                 }
             }
    }
    return 0;
}






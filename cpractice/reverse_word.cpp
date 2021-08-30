/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

string reverse_word(char str[100]){
    int i;
    char b;
    int n = strlen(str);
    for(i = n-1;i >= n/2; i--){
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
    cout << "Output word : " << reverse_word(str);
    
    return 0;
}


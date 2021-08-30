#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>

using namespace std;

string reverse_word(char str[100], int pos, int a){
    int i;
    char b;
    int n = a-pos;
    float q = n/2;
    round(q);
    int m = pos+q;
    for(i = a;i > m; i--){
        b=str[pos+(a-i)];
        str[pos+(a-i)]=str[i];
        str[i]=b;
    }
    return str;
}

int main()
{
    char str[100];
    cout<<"Input word : ";
    cin.getline(str, 100);
    int n = strlen(str);
    int pos = 0;
    
    for(int i=0;i<=n+1;i++){
        if(str[i]==' '&&str[i+1]!=' '){
            pos = i+1;
        }
        if(str[i]!=' ' && str[i+1]==' ' ||i+1==n){
            int a = i;
            reverse_word(str,pos,a);
        }
    }
    
    cout << "Output word : ";
    for(int i=0;i<n;i++){
        cout << str[i];
    }
    return 0;
}







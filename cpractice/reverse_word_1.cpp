#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>

using namespace std;

string reverse_word(char str[100]){
    int i;
    float c;
    int n = strlen(str);
    int pos=0;
    for(i=0;i<=n;i++){
      if(str[i]==' ' || n==i){
          int a = i-1;
          float d = a-pos;
          if(d==1){
             c = d;
          }else{
             c = d/2;
          }
          round(c);
          char b; 
          for(int j = i-1;j >= pos+c; j--){
             b=str[j];
             str[j]=str[pos+i-(j+1)];
             str[pos+i-(j+1)]=b;
            }
         pos = i+1;
        }
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

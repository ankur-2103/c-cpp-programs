/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{ char str[100];
  int i,j,l=0;
  
  cout<<"Enter a string to remove vowels from it: ";
  cin.get(str, 100);
  l = strlen(str);
  
  for(i=0;i<l;i++){
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U'){
          for(j=i;j<l;j++){
              str[j]=str[j+1];
          }
          i--;
         l--;
      }
  };
  
  cout << "The string without vowels is : " << str;
    return 0;
}

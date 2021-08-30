#include <iostream>

using namespace std;

int main()
{
    int b,i,j,r[10],count;
    
    cout << "Enter Decimal number to be converted in Binary : ";
    cin >> b;
    count = 0;
    while(b>0){
      r[count]=b%2;
      b=b/2;
      count++;
    };
    for(i=count-1;i>=0;i--){
      cout<<r[count];
    };
 
    return 0;
}

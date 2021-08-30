/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   
   int a[3][3],b[3][3],i,j,k[i][j],l;
   
   cout<<"Enter values for matrix A : "<<endl;
   for(i=1;i<=3;i++){
       for(j=1;j<=3;j++){
           //cout<< "\na["<<i<<"]["<<j<<"] = ";
           cin >> a[i][j] ;
       }
   }
   
   cout<<"\nEnter values for matrix B : "<<endl;
   for(i=1;i<=3;i++){
       for(j=1;j<=3;j++){
           //cout<< "\nb["<<i<<"]["<<j<<"] = ";
           cin >> b[i][j] ;
       }
   }
   
   cout<<"\nMultipication of matrix A & B is :"<<endl;
   for(i=1;i<=3;i++){
       for(j=1;j<=3;j++){
           k[i][j] = a[i][j]*b[i][j];
           cout<< "\t"<<k[i][j];
       }
       cout<<"\n";
   }
   


    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    
    int x=0;
    int y=1;
    
    cout << "First " << n << " Fibbonace number's are : ";
    for(int i=0;i<n;i++){
        cout << x << " ";
        int f=x+y;
        x = y;
        y = f;
    }
    
    return 0;
}
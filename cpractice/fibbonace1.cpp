#include <iostream>

using namespace std;

int fibbonace(int n){
    if (n <= 1){
		return n;
    }
    return fibbonace(n-1)+fibbonace(n-2);
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    
    cout << "Fibbonace number of " << n << " is " << fibbonace(n);
    
    return 0;
}
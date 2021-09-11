#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(b){  
        int rem = a % b;
        a = b;
        b = rem;
    }

    return a;
}

int main(){

    cout << gcd(42, 24);
    
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int T;
    int N;
    int F=1;
    cin >> T;
    for(int j=0;j<T;j++){
        cin >> N;
        if(N<0){
            F = 0;
        }
        for(int i=0;i<N;i++){
            F = F*(N-i);
        }
        cout << F << "\n";
        F = 1;
    }
    return 0;
}
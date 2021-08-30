/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <unordered_map> 
#include <cstring>

using namespace std;

int main()
{
    unordered_map<char, int> m;
    string s;
    cout << "Enter string : ";
    getline(cin, s);
    
    int n = s.size();
    
    for(int i=0;i<n;i++){
        if(s[i] != ' '){
            if(m.find(s[i])==m.end()){
                m[s[i]] = 1;
            }else{
                m.at(s[i]) += 1;
            }
        }
    }
    
    for (auto x : m){
        cout << x.first << " - " << x.second << endl;
    }
    return 0;
}

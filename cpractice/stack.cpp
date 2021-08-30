#include <iostream>
#include <stack>
#include <cstring>
#include <sstream>
using namespace std;

stack<int> s;
stack<char> str;
int arr[100];

bool balanced_parentheses(string s){
    char x;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '['|| s[i] == '{')
        {
            str.push(s[i]);
        }
 
        if (str.empty()){
            return false;
        }

        switch (s[i]) {
            case ')':
                x = str.top();
                str.pop();
                if (x == '{' || x == '['){
                    return false;
                }
                break;
            case '}':
                x = str.top();
                str.pop();
                if (x == '(' || x == '['){
                    return false;
                }
                break;
            case ']':
                x = str.top();
                str.pop();
                if (x == '(' || x == '{'){
                    return false;
                }
                break;
        }
    }
    return (str.empty());
}

void reverse_string(char *s, int n){
    for(int i=0; i<n; i++){
        str.push(s[i]);
    }
    for(int i=0; i<n; i++){
        s[i] = str.top();
        str.pop();
    }
    cout<< "reversed string"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<s[i];
    }
    
}

int insert_at_bottom(int x){
    if(s.size()==0){
        s.push(x);
    }else{
        int a = s.top();
        s.pop();
        insert_at_bottom(x);
        s.push(a);
    }
}

int reverse_stack(){
    if(s.size()>0){
        int x = s.top();
        s.pop();
        reverse_stack();
        insert_at_bottom(x);
    }
}

int print_stack(){
    if(s.empty()){
        return 0;
    }
    int x = s.top();
    s.pop();
    cout<< x <<endl;
    print_stack();
    s.push(x);
}

int main(){
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);
    
    // print_stack();

    // cout << "After reversing stack"<<endl;
    // reverse_stack();
    // print_stack();
    
    // char s[5];
    // for(int i=0; i<5; i++){
    //     cin>>s[i];
    // }
    // reverse_string(s, strlen(s));

    // string s;
    // cin >> s;
    // if(balanced_parentheses(s)){
    //     cout<<"yes it is balanced"<<endl;
    // }else{
    //     cout<< "it is not balanced"<< endl;
    // }

    return 0;
}
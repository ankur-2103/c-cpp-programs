#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, e, h, a, b, c, ans = -1, min[3];
	    cin>> n>>e>>h>>a>>b>>c;
	    if(e>=h && n>e){
	        cout << ans << endl;
	    }else if(h>=e && n>h){
	        cout << ans << endl;
	    }else{
	        if(a<b<c){
	            while(a-2>0){
	                int o=1;
	                ans = a*o;
	                o++;
	                a=a-2;
	            }
	        }
	    }
	}
	return 0;
}

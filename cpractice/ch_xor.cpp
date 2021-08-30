#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int T;
	cin>>T;
	while(T--){
	    int C;
	    int r, ans=0;
	    cin>>C;
	    for(int i=0;i<C;i++){
	        if(C<pow(2, i)){
	            r = i;
	            break;
	        }
	    }
	    r= pow(2, r);
	    for(int i=0;i<=r;i++){
	        for(int j=0;j<=r;j++){
	            int a = i^j;
	            if(a==C){
	                ans = max(ans, i*j);
	            }
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}

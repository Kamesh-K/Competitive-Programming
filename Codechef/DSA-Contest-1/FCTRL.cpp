#include <bits/stdc++.h>
using namespace std;
#define tc() int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;i++)

int main() {
	tc(){
	    int n; cin>>n;
	    int z=0;
	    loop(i,1,13){
	        if(n<int(pow(5,i)))
	            break;
	        z+=n/int(pow(5,i));
	    }
	    cout<<z<<endl;
	}
	return 0;
}
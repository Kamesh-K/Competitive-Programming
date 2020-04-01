#include <bits/stdc++.h>
using namespace std;
#define tc() int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;i++)

int main() {
	tc(){
	    int n,a,b,count=1;
	    cin>>n;
	    cin>>a;
	    while(n-1){
	        cin>>b;
	        if(b<=a)
	            {
	             a=b;
	             count++;   
	            }
            n--;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
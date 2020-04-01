#include <bits/stdc++.h>
using namespace std;
#define tc() int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;i++)

int main() {
	tc(){
	    int n,flag=0; cin>>n;
	    int a=n;
	    while(n){
	        if(n%10!=0){
	            flag=1;
	            cout<<(n%10);
	        }
            else if(flag==1)
                    cout<<0;
	        n = n/10;
	    }
	    cout<<endl;
	}
	return 0;
}
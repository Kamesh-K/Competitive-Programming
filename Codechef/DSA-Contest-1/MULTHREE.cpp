#include <bits/stdc++.h>
using namespace std;
#define tc() int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;i++)

int main() {
	tc(){
	    long long int k,d0,d1,x=0;
	    cin>>k>>d0>>d1;
	    int p=d0+d1;
	    long long int S = (2*p)%10+(4*p)%10+(8*p)%10+(6*p)%10;
	    if(k==2)
	    {
	        if(p%3==0)
	            cout<<"YES\n";
	        else
	            cout<<"NO\n";
            continue;
	    }
	    switch((k-3)%4){
	        case 3:
	            x+=(8*p)%10;
            case 2:
                x+=(4*p)%10;
            case 1:
                x+=(2*p)%10;
                break;
	    }
	    long long int sum=p+(p%10)+((k-3)/4)*S+x;
	    if(sum%3==0)
	        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}
	return 0;
}
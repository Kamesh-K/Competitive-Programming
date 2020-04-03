#include <bits/stdc++.h>
using namespace std;
#define tc() int t; cin>>t; while(t--)
#define loop(i,a,b) for(i=a;i<b;i++)

int main() {
	tc()
	{
	    int i,j,n,k,flag=1;
	    vector<int> a,b;
	    cin>>n;
	    loop(i,0,n)
	    {
	        cin>>j;
	        a.push_back(j);
	    }
	    loop(i,0,n)
	    {
	        int count=0;
	        if(a[i]==1 && i!=n-1)
	        {
	            loop(j,i+1,n)
	            {
	                if(a[j]==1)
                        break;
                    else
                        count++;
	            }
	            if(j==n && a[n-1]==0)
	            	continue;
	            else {
	            	if(count<5 && flag)
	            	{
	            		cout<<"NO\n";
	            		flag=0;	
	            	}
	            }	
	            
	        }
	    }
	    if(flag)
	        cout<<"YES\n";
	}
	return 0;
}

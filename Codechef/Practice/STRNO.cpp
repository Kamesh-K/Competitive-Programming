#include <bits/stdc++.h>
using namespace std;
#define tc() int t; cin>>t; while(t--)
#define loop(i,a,b) for(i=a;i<b;i++)

int main() 
{
	tc()
	{

		int count = 0; 
		int n,i;
		long long int k;
		vector<int> a;  
		cin>>n>>k;
		while (!(n % 2)) { 
		    n >>= 1;
		    count++; 
		} 
			if (count) 
				a.push_back(count);
			for (long long i = 3; i <= sqrt(n); i += 2) { 
		    count = 0; 
		    while (n % i == 0) { 
		        count++; 
		        n = n / i; 
		    } 
		    if (count) 
		    	a.push_back(count);
		} 
		if (n > 2) 
			a.push_back(1);
		long long int val=0;
		loop(i,0,a.size())
		{
			val+=a[i];
		}
		if(val>=k)
			cout<<1<<endl;
		else
			cout<<0<<endl;

	}    
} 
#include <bits/stdc++.h>
using namespace std;
#define tc() int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;i++)

int main() {
	tc(){
	    int g; cin>>g; while(g--){
	    int initial,n,final,count_tails=0,count_heads=0; 
	    cin>>initial>>n>>final;
        if(n%2!=0){
            if(initial==1){
                count_tails=(n/2)+1;
                count_heads=(n/2);
            }
            else{
                count_tails=(n/2);
                count_heads=(n/2)+1;
            }
        }
        if(n%2==0){
            count_heads=count_tails=(n/2);
        }
        if(final==2)
            cout<<count_tails<<endl;
        else
            cout<<count_heads<<endl;
	    }
    }
	return 0;
}
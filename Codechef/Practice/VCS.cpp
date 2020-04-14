#include <bits/stdc++.h>
using namespace std;
#define tc() int t;cin>>t;while(t--)
#define loop(i,a,b) for(int i=a;i<b;i++)

int main() {
	tc(){
	    int n,m,k,M[100],K[100],count_tracked=0,count_untracked=0,ignored,tracked;
	    cin>>n>>m>>k;
	    loop(i,0,m)
	        cin>>M[i];
        loop(i,0,k)
            cin>>K[i];
        loop(i,1,n+1){
            ignored=0;tracked=0;
            loop(j,0,m){
                if(i==M[j]){
                    ignored=1;
                    break;
                }
            }
            loop(j,0,k){
                if(K[j]==i){
                    tracked=1;
                    break;
                }
            }
            if((ignored==1)&&(tracked==1))
                count_tracked++;
            else if((ignored==0)&&(tracked==0))
                    count_untracked++;
        }
        cout<<count_tracked<<' '<<count_untracked<<'\n';
	}
	return 0;
}
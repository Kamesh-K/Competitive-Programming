#include <bits/stdc++.h>
using namespace std;
#define tc() int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;i++)

int main() {
    tc(){
        int n,flag=0,a,b,i=0; cin>>n;
        while(i<n){
            cin>>a;
            if(a==1&&i<n-1){
                loop(j,1,6){
                    if(i+j==n)
                        break;
                    cin>>b;
                    if(b==1){
                        cout<<"NO"<<endl;
                        flag=1;
                        break;
                        }
                }
                if(flag==1)
                    break;
                else{
                    i+=6;
                    continue;
                }
            }
            i++;
        }
        if(flag==0)
            cout<<"YES"<<endl;
    }
	return 0;
}

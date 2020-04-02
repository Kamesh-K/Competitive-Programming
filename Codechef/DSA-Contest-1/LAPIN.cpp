#include <bits/stdc++.h>
using namespace std;
#define tc() int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;i++)

int main() {
	tc(){
	    int flag =0,b=0;
	    string s;
	    cin>>s;
	    int a=s.length();
	    if(a%2!=0)
	        b=a/2+1;
        else
            b=a/2;
	    loop(i,0,a/2){
	        loop(j,b,a){
	            if(s[i]==s[j]){
	                s[i]=0;
	                s[j]=0;
	                break;
	            }
	        }
    	}
    	loop(i,0,a/2){
    	    if(s[i]!=0){
    	        cout<<"NO"<<endl;
    	        flag=1;
    	        break;
    	    }
    	}
    	if(flag==1)
    	    continue;
    	loop(i,b,a){
    	    if(s[i]!=0){
    	        cout<<"NO"<<endl;
    	        flag=1;
    	        break;
    	    }
    	}
    	if(flag==1)
    	    continue;
    	cout<<"YES"<<endl;
	}
	return 0;
}
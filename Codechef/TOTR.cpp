#include <bits/stdc++.h>
using namespace std;
#define tc() int t; cin>>t; while(t--)
#define loop(i,a,b) for(int i=a;i<b;i++)

int main() {
    int t,flag;cin>>t;
	char A[26],B[26];
	loop(i,0,26)
	    A[i]='a'+i;
    loop(i,0,26)
        cin>>B[i];
    while(t--){
        string s;
        cin>>s;
        loop(i,0,s.size()){
            flag=0;
            if((s[i]<=90)&&(s[i]>=65)){
                s[i]=s[i]+32;
                flag=1;
            }
            loop(j,0,26){
                if(s[i]==A[j]){
                    if(flag==1){
                        cout<<char(B[j]-32);
                        break;}
                    if(flag==0){
                        cout<<B[j]; break;}
                }
                // If else condition is supposed to run only once in 26 times because iteration runs for all the characters and if all the characters don't match and if s[i] is a underscore we replace it by space  
                if(s[i]=='_' && j==25)
                    cout<<" ";
            }
        }cout<<'\n';}
    return 0;
}
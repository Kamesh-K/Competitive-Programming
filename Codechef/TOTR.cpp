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
        int j,k;
        cin>>s;   
        loop(i,0,s.size())
        {
            if(s[i]=='_')
            {
                cout<<" ";
                continue;
            }
            else if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
            {
                int flag = 0;
                if(s[i]>='A' && s[i]<='Z')
                    {
                     flag = 1;
                     s[i]=s[i]-'A'+'a';
                    }
                k=0;
                loop(j,0,26)
                    {
                        if(s[i]==A[j])
                            {
                                k=j;
                                break;
                            }
                    }
                if(flag)
                    cout<<char(B[k]-'a'+'A');
                else
                    cout<<B[k];
            }
            else
            {
                cout<<s[i];
            }
        }
        cout<<'\n';
    }
    return 0;
}
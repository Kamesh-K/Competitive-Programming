#include <bits/stdc++.h>
using namespace std;
double tick()
{
    static clock_t oldt,newt=clock();
    double diff=1.0*(newt-oldt)/CLOCKS_PER_SEC;
    oldt=newt;
    return diff;
}
#define ll long long int
#define ld long double
#define loo(i,a,b) for(i=a;i<b;i++)
#define vi vector<int>
#define vv vector<vector<int> >
#define ii pair<int,int>
#define is pair<int,string>
#define vii vector<ii>
#define vis vector<is>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
#define n5 100005
#define n6 1000006
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define LINF LLONG_MAX-1001
#define INF INT_MAX
#define sd(n) scanf("%d",&n)
#define sc(c) scanf("%c",&c)
#define tc() int t ; cin>>t; while(t--)
#define sl(n) scanf("%lld",&n)
int main(){
   tc()
   {
       int n,i,j=1;
       string s;
       cin>>n;
       cin>>s;
       loo(i,0,n)
        {
            if(s[i]=='I')
                {
                    cout<<"INDIAN\n";
                   j=0; break;
                }
            else if(s[i]=='Y')
            {
                cout<<"NOT INDIAN\n";
                j=0;break;
            }
        }
        if(j)
        cout<<"NOT SURE\n";
   }
   return 0;
}
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
void make(int a[101],int x,int y)
{
    int i;
    if(x<1 && y>101)
        {
            x=1;
            y=101;
        }
    else if(x<1)
    {
        x=1;
    }
    else if(y>101)
        y=101;
    loo(i,x,y)
        a[i]=0;
}
int main(){
    fastio;
    int n,i,x,y,j,k=0,p;
    tc()
    {
        k=0;
        int a[101];
        loo(i,1,101)a[i]=1;
        cin>>n>>x>>y;
        p=x*y;
        loo(i,0,n)
        {
            cin>>j;
            make(a,j-p,j+p+1);
        }
        loo(i,1,101)
        {
            if(a[i]==1)
              {  k++;}
        }
        cout<<k<<endl;
    }
   return 0;
}
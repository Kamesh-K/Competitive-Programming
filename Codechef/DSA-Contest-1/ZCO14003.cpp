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
#define loop(i,a,b) for(i=a;i<b;i++)
#define vi vector<int>
#define vv vector<vector<int> >
#define ii pair<int,int>
#define is pair<int,string>
#define vii vector<ii>
#define vis vector<is>
#define pb emplace_back
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007
#define n5 100005
#define n6 1000006
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define LINF LLONG_MAX-1001
#define INF INT_MAX
#define tc() int t ; cin>>t; while(t--)
#define sl(n) scanf("%lld",&n)
// sort(p, p+n, [=](int i, int j) { return a[i] < a[j]; }); 
int main(){
    fastio;
    int n,i,j,k,x,y,z,flag=1,count=0;
    string s;
        cin>>n;
    vector<long long int> a;
    long long int val=0, revenue=0;
    loop(i,0,n)
    {
         cin>>k;
         a.push_back(k);
    }
    sort(a.begin(),a.end());
    loop(i,0,n)
    {
        val = a[i]*(n-i);
        revenue = max(val,revenue);
    }
    cout<<revenue<<'\n';
    return 0;
    return 0;
}
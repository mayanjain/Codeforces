#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n),z(n);
    for(auto& i:v)cin>>i;
    for(auto& i:z)cin>>i;
    ll ans=abs(v[0]-z[n-1])+abs(v[n-1]-z[0]);
    ans=min(ans,abs(v[0]-z[0])+abs(v[n-1]-z[n-1]));
    auto uv=v,uz=z;
    sort(v.begin(),v.end());
    sort(z.begin(),z.end());
    vector<ll> vals(4,LONG_LONG_MAX);
    for(int i=0 ; i<n ; i++)vals[0]=min(abs(uv[0]-z[i]),vals[0]);
    for(int i=0 ; i<n ; i++)vals[1]=min(abs(uv[n-1]-z[i]),vals[1]);
    for(int i=0 ; i<n ; i++)vals[2]=min(abs(uz[0]-v[i]),vals[2]);
    for(int i=0 ; i<n ; i++)vals[3]=min(abs(uz[n-1]-v[i]),vals[3]);
    ll cur=abs(uv[0]-uz[0]);
    cur+=vals[1]+vals[3];
    ans=min(ans,cur);
    cur=abs(uv[0]-uz[n-1]);
    cur+=vals[1]+vals[2];
    ans=min(ans,cur);
    cur=abs(uv[n-1]-uz[0]);
    cur+=vals[3]+vals[0];
    ans=min(ans,cur);
    cur=abs(uv[n-1]-uz[n-1]);
    cur+=vals[0]+vals[2];
    ans=min(ans,cur);
    ans=min(ans,vals[0]+vals[1]+vals[2]+vals[3]);
    cout<<ans<<'\n';
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}    
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
    ll x,y;
    for(int i=0 ; i<n ; i++){
        x=v[i];
        y=z[i];
        v[i]=max(x,y);
        z[i]=min(x,y);
    }
    x=0,y=0;
    for(int i=0 ; i<n ; i++){
        x=max(x,v[i]);
        y=max(y,z[i]);
    }
    cout<<x*y<<'\n';
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
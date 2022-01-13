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
    ll n,l,ans=0;
    cin>>n>>l;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    for(ll i=0 ; i<l ; i++){
        ll c=0,k=(1<<i);
        for(auto& i:v){
            if((i&k))c++;
        }
        if(c>=(n+1)/2){
            ans|=k;
        }
    }
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
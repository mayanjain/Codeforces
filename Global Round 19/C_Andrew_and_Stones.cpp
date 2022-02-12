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
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    bool ok=0,gt1=0;
    ll ans=0;
    for(int i=1 ; i<n-1 ; i++){
        if(v[i]%2==0){
            ok=1;
        }
        else if(v[i]>1)gt1=1;
        ans+=(v[i]+1)/2;
    }
    if(ok)cout<<ans<<'\n';
    else if(gt1 && n>3)cout<<ans<<"\n";
    else cout<<"-1\n";
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
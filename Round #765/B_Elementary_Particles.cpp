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
    ll n,ans=-1;
    cin>>n;
    vector<ll> v(n+1);
    unordered_map<ll,ll> mp;
    for(int i=1 ; i<=n ; i++){
        cin>>v[i];
        if(mp.count(v[i])){
            ans=max(ans,n-(i-mp[v[i]]));
        }
        mp[v[i]]=i;
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
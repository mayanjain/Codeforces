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
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    multiset<ll> m;
    for(auto& i:v)m.insert(i);
    ll ans=0;
    for(auto& i:m){
        if(m.count(i*x)){
            m.erase(m.lower_bound(i*x));
        }
        else{
            ans++;
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
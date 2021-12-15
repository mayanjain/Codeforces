#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
#define mod 1000000007
#define mod1 998244353

ll gcd(ll a,ll b){if (b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    sort(v.begin(),v.end());
    int j=k;
    ll ans=0;
    for(int i=n-1 ; i>=0 && k ; i--){
        ans+=v[i-j]/v[i];
        k--;
    }
    for(int i=n-2*j-1 ; i>=0 ; i--){
        ans+=v[i];
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
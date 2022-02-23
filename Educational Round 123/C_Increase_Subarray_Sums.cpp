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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    vector<ll> cal(n+1);
    for(auto& i:v)cin>>i;
    for(ll i=1 ; i<=n ; i++){
        ll cur=0,ans=0;
        for(int j=0 ; j<i ; j++){
            cur+=v[j];
        }
        ans=cur;
        for(int j=i ; j<n ; j++){
            cur+=v[j];
            cur-=v[j-i];
            ans=max(cur,ans);
        }
        cal[i]=ans;
    }
    for(int i=0 ; i<=n ; i++){
        ll ans=0;
        for(int j=0 ; j<=n ; j++){
            ans=max(ans,cal[j]+min(j,i)*k);
        }
        cout<<ans<<" ";
    }
    cout<<'\n';
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
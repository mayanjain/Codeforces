#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

ll bits(ll n){
    ll ans=0;
    for(int i=0 ; i<60 ; i++){
        ll k=(1LL<<i);
        if((n&k))ans++;
    }
    return ans;
}

vector<ll> facts;

void solvin(ll n,ll c,ll& ans,ll cur){
    if(c==facts.size()){
        ans=min(ans,cur+bits(n));
        return;
    }
    solvin(n,c+1,ans,cur);
    if(n>=facts[c])solvin(n-facts[c],c+1,ans,cur+1);
}

void solve(){
    ll n;
    cin>>n;
    ll ans=INT_MAX;
    solvin(n,0,ans,0);
    cout<<ans<<"\n";
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k=1;
    for(ll i=2 ; i<=20 ; i++){
        facts.push_back(k);
        k*=i;
        if(k>1e12)break;
        // cout<<k<<" ";
    }
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}    
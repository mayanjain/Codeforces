#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

bool solvin(vector<ll>& v,ll mid){
    auto cur=v;
    for(ll i=v.size()-1 ; i>=2 ; i--){
        if(cur[i]<mid)return 0;
        ll left=(cur[i]-mid)/3;
        left=min(left,v[i]/3);
        cur[i-1]+=left;
        cur[i-2]+=2*left;
    }
    if(cur[0]<mid || cur[1]<mid)return 0;
    return 1;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    ll l=0,h=1e9;
    while(l<h){
        ll mid=(l+h+1)/2;
        if(solvin(v,mid)){
            l=mid;
        }
        else h=mid-1;
    }
    cout<<l<<'\n';
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
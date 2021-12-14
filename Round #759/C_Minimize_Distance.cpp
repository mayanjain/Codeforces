#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
const int mod = 1e9 + 7;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> a,b;
    ll x;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        if(x>=0)a.push_back(x);
        else b.push_back(-x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll asize=a.size(),bsize=b.size();
    ll f=0;
    ll ans=0;
    ll y=0,z=0;
    ll cur=asize-1;
    while(cur>=0){
        ans+=a[cur];
        cur-=k;
        if(cur>=0)ans+=a[cur];
    }
    cur=bsize-1;
    while(cur>=0){
        ans+=b[cur];
        cur-=k;
        if(cur>=0)ans+=b[cur];
    }
    if(asize)y=a[asize-1];
    if(bsize)z=b[bsize-1];
    cout<<ans+min(y,z)<<'\n';
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
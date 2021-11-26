#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    ll x,ans=0;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    ll pos=1;
    vector<ll> kk(n);
    for(int i=0 ; i<n ; i++){
        kk[v[i].second]=pos;
        ans+=(2*abs(pos)*v[i].first);
        if(pos>0)pos=-pos;
        else{
            pos=abs(pos)+1;
        }
    }
    cout<<ans<<"\n"<<"0 ";
    for(auto& i:kk)cout<<i<<" ";
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
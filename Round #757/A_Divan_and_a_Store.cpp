#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    ll n,l,r,k,x;
    cin>>n>>l>>r>>k;
    vector<ll> v;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        if(x>=l && x<=r){
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    n=v.size();
    int i=0;
    int ans=0;
    while(i<n){
        if(v[i]<=k){
            ans++;
            k-=v[i++];
        }
        else break;
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
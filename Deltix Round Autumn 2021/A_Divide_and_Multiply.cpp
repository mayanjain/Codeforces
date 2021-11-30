#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    ll mul=1;
    for(auto& i:v){
        while(i%2==0){
            i/=2;
            mul*=2;
            // cout<<mul<<" ";
        }
    }
    sort(v.begin(),v.end());
    v[n-1]*=mul;
    ll ans=0;
    for(auto& i:v)ans+=i;
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
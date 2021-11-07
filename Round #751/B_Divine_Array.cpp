#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    map<ll,ll> mp,up;
    for(auto& i:v){
        cin>>i;
        mp[i]++;
    }
    int ok=1;
    vector<vector<ll>> total;
    while(ok){
        ok=0;
        total.push_back(v);
        for(auto& i:v){
            if(i!=mp[i])ok++;
            i=mp[i];
            up[i]++;
        }
        mp=up;
        up.clear();
    }

    ll q,x,y;
    cin>>q;
    while(q--){
        cin>>x>>y;
        x--;
        cout<<total[min(y,ll(total.size())-1)][x]<<'\n';
    }

} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    int k=1;
    while(t--){
        solve();
    }
    return 0;
}    
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
const int mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    sort(v.begin(),v.end());
    n=n/2;
    int i=1;
    while(n--){
        cout<<v[i++]<<" "<<v[0]<<'\n';
    }
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
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
#define mod 1000000007
#define mod1 998244353
ll lcm(ll a,ll b){return (a/__gcd(a,b))*b;}

void solve(){
    vector<ll> v(7);
    for(auto& i:v)cin>>i;
    ll a=v[0],b=v[1],c=v[6]-v[0]-v[1];
    cout<<a<<" "<<b<<" "<<c<<"\n";
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
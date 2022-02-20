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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    vector<ll> odd,even;
    for(auto& i:v){
        if(i%2)odd.push_back(i);
        else even.push_back(i);
    }
    auto o=odd,e=even;
    sort(o.begin(),o.end());
    sort(e.begin(),e.end());
    if(o==odd && e==even)cout<<"Yes\n";
    else cout<<"No\n";
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
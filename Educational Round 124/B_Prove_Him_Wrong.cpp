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
    ll cur=1;
    for(int i=0 ; i<n ; i++){
        if(cur>1e9)break;
        v[i]=cur;
        cur*=3;
    }
    if(v[n-1]){
        cout<<"YES\n";
        for(auto& i:v)cout<<i<<" ";
        cout<<'\n';
    }
    else cout<<"NO\n";
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
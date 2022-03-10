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
    sort(v.begin(),v.end());
    ll red=v[n-1];
    ll blue=v[0]+v[1];
    if(blue<red){
        cout<<"YES\n";
        return;
    }
    ll j=n-2;
    for(int i=2 ; i<j ; i++){
        blue+=v[i];
        red+=v[j--];
        if(blue<red){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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
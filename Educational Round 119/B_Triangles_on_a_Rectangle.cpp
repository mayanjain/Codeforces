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
    ll w,h;
    cin>>w>>h;
    ll k,x;
    vector<vector<ll>> v(4);
    vector<vector<ll>> z(4);
    ll ans=0;
    for(int i=0 ; i<4 ; i++){
        cin>>k;
        ll mn=INT_MAX,mx=INT_MIN;
        while(k--){
            cin>>x;
            mn=min(x,mn);
            mx=max(x,mx);
        }
        if(i==0 || i==1){
            ans=max(ans,(mx-mn)*h);
        }
        else ans=max(ans,(mx-mn)*w);
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
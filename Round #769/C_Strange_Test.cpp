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
    ll a,b;
    cin>>a>>b;
    ll ans=b-a;
    ll mx=(b|a);
    for(ll i=a ; i<=b ; i++){
        ans=min(ans,(i|b)-b+i-a+1);
    }
    for(ll i=b ; i<=mx ; i++){
        ans=min(ans,(i|a)-b+1);
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
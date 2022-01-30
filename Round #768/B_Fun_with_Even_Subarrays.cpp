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
    reverse(v.begin(),v.end());
    ll x=v[0],cur=1,z=0,ans=0;
    for(int i=1 ; i<n ; i++){
        if(v[i]==x){
            if(z){
                z++;
            }
            else cur++;
        }
        else z++;
        if(z==cur){
            ans++;
            cur=i+1;
            z=0;
        }
    }
    if(z)ans++;
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
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
    vector<ll> v(3);
    for(auto& i:v)cin>>i;
    ll d=v[1]-v[0];
    ll ls=v[1]+d;
    if(ls>0 && ls%v[2]==0){
        cout<<"YES\n";
        return;
    }
    d=v[2]-v[1];
    ls=v[1]-d;
    if(ls>0 && ls%v[0]==0){
        cout<<"YES\n";
        return;
    }
    if((v[2]-v[0])%2==0){
        d=(v[2]-v[0])/2;
        ls=v[0]+d;
        if(ls>0 && ls%v[1]==0){
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
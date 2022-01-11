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
    ll n,x;
    cin>>n;
    unordered_map<ll,ll> ms;
    for(ll i=0 ; i<n ; i++){
        cin>>x;
        ms[x]++;
    }
    bool ans=1;
    for(ll i=n ; i>=1 ; i--){
        ll k=0;
        ans=0;
        for(auto& m:ms){
            if(m.second==0)continue;
            x=m.first;
            k=m.second;
            while(x){
                if(x==i){
                    m.second--;
                    break;
                }
                x/=2;
            }
            if(k!=m.second){
                ans=1;
                break;
            }
        }
        if(!ans){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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
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
    ll hc,dc,hm,dm,coins,at,def;
    cin>>hc>>dc>>hm>>dm>>coins>>at>>def;
    ll hcur,dcur;
    for(ll i=0 ; i<=coins ; i++){
        hcur=i*def+hc;
        dcur=(coins-i)*at+dc;
        ll req=hm/dcur+(hm%dcur!=0);
        ll matt=hcur/dm+(hcur%dm!=0);
        if(req<=matt){
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
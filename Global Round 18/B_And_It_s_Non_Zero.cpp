#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<ll>> mp(30,vector<ll>(2e5+2));
    ll k=1,z=0;
    for(k ; k<2e5+2 ; k*=2){
        for(ll i=1 ; i<2e5+2 ; i++){
            mp[z][i]=mp[z][i-1];
            if((i&k))mp[z][i]++;
            // cout<<mp[z][i]<<" ";
        }
        z++;
    }
    int t = 1;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll k=1,z=0;
        ll ans=0;
        for(k ; k<2e5+2 ; k*=2){
            ans=max(ans,mp[z][b]-mp[z][a-1]);
            z++;
        }
        cout<<b-a-ans+1<<'\n';
    }
    return 0;
}
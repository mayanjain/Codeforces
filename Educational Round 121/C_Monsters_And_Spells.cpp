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
    vector<pair<ll,ll>> v(n);
    for(int i=0 ; i<n ; i++)cin>>v[i].first;
    for(int i=0 ; i<n ; i++)cin>>v[i].second;
    ll st=v[n-1].first-v[n-1].second+1,ls=v[n-1].first,ans=0;
    for(int i=n-2 ; i>=0 ; i--){
        if(st>v[i].first){
            ans+=((ls-st+1)*(ls-st+2))/2;
            ls=v[i].first;
            st=v[i].first-v[i].second+1;
        }
        else st=min(st,v[i].first-v[i].second+1);
    }
    ans+=((ls-st+1)*(ls-st+2))/2;
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
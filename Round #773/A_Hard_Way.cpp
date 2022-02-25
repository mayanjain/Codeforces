#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

bool cmp(pair<ll,ll>& p,pair<ll,ll>& q){
    return p.second<q.second;
}

void solve(){
    vector<pair<ll,ll>> v(3);
    for(auto& i:v)cin>>i.first>>i.second;
    sort(v.begin(),v.end(),cmp);
    if(v[2].second==v[1].second)cout<<abs(v[2].first-v[1].first)<<'\n';
    else cout<<"0\n";
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
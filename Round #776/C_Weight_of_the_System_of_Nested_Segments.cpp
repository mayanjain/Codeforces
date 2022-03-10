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
    ll n,m,ans=0;
    cin>>n>>m;
    vector<ll> w(m),c(m);
    map<ll,vector<ll>> mp;
    map<ll,ll> pos;
    for(int i=0 ; i<m ; i++){
        cin>>c[i]>>w[i];
        mp[w[i]].push_back(c[i]);
        pos[c[i]]=i+1;
    }
    vector<ll> v;
    for(auto& i:mp){
        for(auto& j:i.second){
            v.push_back(j);
            ans+=i.first;
            // cout<<i.first<<" ";
            if(v.size()==2*n)break;
        }
        if(v.size()==2*n)break;
    }
    cout<<ans<<'\n';
    sort(v.begin(),v.end());
    for(int i=0 ; i<n ; i++){
        cout<<pos[v[i]]<<" "<<pos[v[2*n-i-1]]<<'\n';
    }
    cout<<endl;
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
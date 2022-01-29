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
    map<ll,vector<ll>> mp;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        mp[x].push_back(i);
    }
    ll ps=0,mx=0;
    vector<ll> ans;
    for(int i=0 ; ps<n ; i++){
        auto it=lower_bound(mp[i].begin(),mp[i].end(),ps);
        if(it==mp[i].end()){
            // cout<<i<<" ";
            ans.push_back(i);
            i=-1;
            ps=++mx;
        }
        else{
            mx=max(mx,*it);
            // cout<<*it<<"  ";
        }
    }
    cout<<ans.size()<<"\n";
    for(auto& i:ans)cout<<i<<" ";
    cout<<'\n';
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
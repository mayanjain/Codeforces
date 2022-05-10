#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

pair<ll,ll> solvin(vector<vector<ll>>& v,ll cur,ll& ans,string& s){
    ll black=0,white=0;
    for(auto& i:v[cur]){
        auto p=solvin(v,i,ans,s);
        black+=p.second;
        white+=p.first;
    }
    if(s[cur]=='W')white++;
    else black++;
    if(white==black)ans++;
    return {white,black};
} 

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n-1);
    vector<vector<ll>> parent(n);
    string s;
    for(int i=0 ; i<n-1 ; i++){
        cin>>v[i];
        parent[v[i]-1].push_back(i+1);
    }
    cin>>s;
    ll ans=0;
    solvin(parent,0,ans,s);
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
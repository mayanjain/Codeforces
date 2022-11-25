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
#define ordered_multiset tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    vector<vector<int>> mp(130);
    for(int i=0 ; i<n ; i++){
        mp[s[i]].push_back(i+1);
    }
    ll ans=abs(s[n-1]-s[0]);
    vector<int> ind;
    if(s[0]<s[n-1]){
        for(int i=s[0] ; i<=s[n-1] ; i++){
            for(auto& j:mp[i])ind.push_back(j);
        }
    }
    else{
        for(int i=s[0] ; i>=s[n-1] ; i--){
            for(auto& j:mp[i])ind.push_back(j);
        }
    }
    cout<<ans<<" "<<ind.size()<<'\n';
    for(auto& i:ind)cout<<i<<" ";
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
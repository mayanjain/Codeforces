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
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n,vector<ll>(m));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>v[i][j];
        }
    }
    if((n+m)%2==0){
        cout<<"NO\n";
        return;
    }
    vector<vector<pair<ll,ll>>> z(n+1,vector<pair<ll,ll>>(m+1,{INT_MAX,INT_MIN}));
    z[0][1]={0,0};
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            z[i+1][j+1].first=min(z[i][j+1].first,z[i+1][j].first)+v[i][j];
            z[i+1][j+1].second=max(z[i][j+1].second,z[i+1][j].second)+v[i][j];
            // cout<<z[i+1][j+1].first<<" "<<z[i+1][j+1].second<<"  ";
        }
    }
    if(z[n][m].first<=0 && z[n][m].second>=0)cout<<"YES\n";
    else cout<<"NO\n";
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
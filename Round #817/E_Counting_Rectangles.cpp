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
    ll n,q;
    cin>>n>>q;
    vector<pair<ll,ll>> v(n);
    vector<vector<ll>> count(1001,vector<ll>(1001));
    for(auto& i:v){
        cin>>i.first>>i.second;
        count[i.first][i.second]+=i.first*i.second;
    }
    for(int i=1 ; i<=1000 ; i++){
        for(int j=1 ; j<=1000 ; j++){
            count[i][j]+=count[i-1][j]+count[i][j-1]-count[i-1][j-1];
        }
    }
    while(q--){
        vector<ll> xy(4);
        for(auto& i:xy)cin>>i;
        cout<<count[xy[2]-1][xy[3]-1]-count[xy[2]-1][xy[1]]-count[xy[0]][xy[3]-1]+count[xy[0]][xy[1]]<<'\n';
    }
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
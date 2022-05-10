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

ll solvin(int i,int j,int n, int m,vector<vector<ll>>& v){
    ll ans=0;
    int k=i,l=j;
    while(k>=0 && l>=0){
        ans+=v[k--][l--];
    }
    k=i+1,l=j-1;
    while(k<n && l>=0){
        ans+=v[k++][l--];
    }
    k=i+1,l=j+1;
    while(k<n && l<m){
        ans+=v[k++][l++];
    }
    k=i-1,l=j+1;
    while(k>=0 && l<m){
        ans+=v[k--][l++];
    }
    return ans;
}

void solve(){
    ll n,m,ans=0;
    cin>>n>>m;
    vector<vector<ll>> v(n,vector<ll>(m));
    for(auto& i:v)for(auto& j:i)cin>>j;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            ans=max(ans,solvin(i,j,n,m,v));
        }
    }
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
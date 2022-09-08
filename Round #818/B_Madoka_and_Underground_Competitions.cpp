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
    ll n,k,r,c;
    cin>>n>>k>>r>>c;
    vector<vector<char>> ans(n,vector<char>(n,'.'));
    r--;c--;
    for(int i=r,f=r-k ; i<=2*n || f>=-(n+1) ; i+=k,f-=k){
        int z=i;
        for(int j=c ; j<n && z<n ; j++,z++){
            if(z>=0)ans[z][j]='X';
        }
        z=i-1;
        for(int j=c-1 ; j>=0 && z>=0 ; j--,z--){
            if(z<n)ans[z][j]='X';
        }
        z=f;
        for(int j=c ; j<n && z<n ; j++,z++){
            if(z>=0)ans[z][j]='X';
        }
        z=f-1;
        for(int j=c-1 ; j>=0 && z>=0 ; j--,z--){
            if(z<n)ans[z][j]='X';
        }
    }
    for(auto& i:ans){
        for(auto& j:i)cout<<j;
        cout<<'\n';
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
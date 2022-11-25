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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n),z(n);
    for(int i=n-k ; i<n ; i++)cin>>v[i];
    for(int i=n-1 ; i>n-k ; i--){
        z[i]=v[i]-v[i-1];
    }
    if(k==1){
        cout<<"Yes\n";
        return;
    }
    ll sum=0;
    for(int i=n-k ; i>0 ; i--){
        z[i]=z[n-k+1];
        sum+=z[i];
    }
    z[0]=v[n-k]-sum;
    for(int i=1 ; i<n ; i++){
        if(z[i]<z[i-1]){
            cout<<"No\n";
            return;
        }
        // cout<<z[i]<<" ";
    }
    cout<<"Yes\n";
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
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
    vector<ll> v(n);
    ll sum=0;
    for(auto& i:v){
        cin>>i;
        sum+=i;
    }
    if(k<=n){
        ll ans=0,cur=0;
        for(int i=0 ; i<n ; i++){
            cur+=v[i];
            if(i>=k){
                cur-=v[i-k];
            }
            ans=max(ans,cur);
        }
        ans+=k*(k-1)/2;
        cout<<ans<<'\n';
    }
    else{
        ll ans=0;
        for(int i=0 ; i<n-1 ; i++){
            ans+=v[i]+k--;
        }
        cout<<ans+k+v[n-1]-n<<'\n';
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
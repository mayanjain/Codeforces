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
    ll n,ans=0;
    cin>>n;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    ordered_multiset st;
    for(int i=n-1 ; i>=0 ; i--){
        if(i+1>v[i]){
            auto it=st.upper_bound(i+2);
            // for(auto& i:st){
            //     cout<<i<<" "<<st.order_of_key(i)<<"  ";
            // }
            if(it!=st.end()){
                ans+=st.size()-st.order_of_key(*it);
            }
            // cout<<ans<<" ";
            st.insert(v[i]);
        }
        // cout<<'\n';
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
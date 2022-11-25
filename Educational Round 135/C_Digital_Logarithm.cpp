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
    int n,ans=0;
    cin>>n;
    vector<int> v(n),z(n);
    multiset<int> mp,up;
    for(auto& i:v){
        cin>>i;
        mp.insert(i);
    }
    for(auto& i:z){
        cin>>i;
        up.insert(i);
    }
    while(mp.size()){
        auto a=*mp.rbegin(),b=*up.rbegin();
        if(a==b){
            mp.erase(mp.lower_bound(a));
            up.erase(up.lower_bound(a));
        }
        else if(a<b){
            up.erase(up.lower_bound(b));
            up.insert(to_string(b).size());
            ans++;
        }
        else{
            mp.erase(mp.lower_bound(a));
            mp.insert(to_string(a).size());
            ans++;
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
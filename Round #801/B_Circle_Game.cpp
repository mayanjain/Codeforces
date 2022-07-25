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
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto& i:v){
        cin>>i;
    }
    ll odd=INT_MAX,ev=INT_MAX;
    for(int i=0 ; i<n ; i++){
        if(i%2){
            odd=min(v[i],odd);
        }
        else ev=min(v[i],ev);
    }
    string ans;
    if(n%2==0){
        if(odd<ev){
            ans="Mike";
        }
        else if(ev<odd){
            ans="Joe";
        }
        else{
            for(int i=0 ; i<n ; i++){
                if(v[i]==ev){
                    if(i%2)ans="Mike";
                    else ans="Joe";
                    break;
                }
            }
        }
    }
    else ans="Mike";
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
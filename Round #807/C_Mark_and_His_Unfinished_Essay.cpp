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
    ll n,c,q,l,r;
    cin>>n>>c>>q;
    vector<char> s(n+1);
    for(int i=1 ; i<=n ; i++){
        cin>>s[i];
    }
    vector<ll> v(c+1,1);
    map<ll,ll> mp;
    ll cur=n;
    for(int i=0 ; i<c ; i++){
        cin>>l>>r;
        v[i+1]=cur+1;
        mp[cur+1]=cur-l+1;
        cur+=(r-l+1);
    }
    while(q--){
        cin>>l;
        while(l>n){
            auto it=upper_bound(v.begin(),v.end(),l);
            --it;
            l-=mp[*it];
            // cout<<mp[*it]<<" ";
        }
        cout<<s[l]<<'\n';
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
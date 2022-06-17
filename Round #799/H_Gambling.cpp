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
    map<ll,vector<ll>> mp;
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
        mp[v[i]].push_back(i);
    }
    ll ans=0;
    vector<ll> z(3);
    for(auto& i:mp){
        ll st=0,count=0;
        for(int j=0 ; j<i.second.size() ; j++){
            count++;
            ll left=i.second[j]-i.second[st]+1-count;
            while(count<=left){
                st++;
                count--;
                left=i.second[j]-i.second[st]+1-count;
            }
            if(count-left>ans){
                ans=count-left;
                z[0]=i.first;
                z[1]=i.second[st]+1;
                z[2]=i.second[j]+1;
            }
        }
    }
    for(auto& i:z)cout<<i<<" ";
    cout<<'\n';
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
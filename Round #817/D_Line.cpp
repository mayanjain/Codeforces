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
    int n;
    string s;
    cin>>n>>s;
    ll cur=0;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='L'){
            cur+=i;
        }
        else cur+=n-i-1;
    }
    vector<ll> v(1,0);
    for(int i=0 ; i<n ; i++){
        ll x=i,y=n-i-1;
        if(s[i]=='R')swap(x,y);
        if(y-x>0)v.push_back(y-x);
    }
    sort(v.begin(),v.end(),greater<int>());
    for(int i=1 ; i<v.size() ; i++){
        v[i]+=v[i-1];
    }
    int x=v.size();
    for(int i=0 ; i<n ; i++){
        cout<<cur+v[min(i,x-1)]<<" ";
    }
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
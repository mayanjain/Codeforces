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
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for(auto& i:v)cin>>i.first;
    for(auto& i:v)cin>>i.second;
    sort(v.begin(),v.end());
    vector<int> mn(n,v.back().second);
    for(int i=n-2 ; i>=0 ; i--){
        mn[i]=min(v[i].second,mn[i+1]);
    }
    int reduced=k;
    for(int i=0 ; i<n ; i++){
        int cur=v[i].first-reduced;
        if(cur<=0)continue;
        k-=mn[i];
        if(k<=0){
            cout<<"NO\n";
            return;
        }
        reduced+=k;
        i--;
    }
    cout<<"YES\n";
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
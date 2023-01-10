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
    vector<int> v(4);
    for(auto& i:v)cin>>i;
    if(v[0]<min(v[1],v[2]) && v[3]>max(v[1],v[2]))cout<<"YES\n";
    else if(v[2]<min(v[3],v[0]) && v[1]>max(v[0],v[3]))cout<<"YES\n";
    else if(v[3]<min(v[2],v[1]) && v[0]>max(v[1],v[2]))cout<<"YES\n";
    else if(v[1]<min(v[0],v[3]) && v[2]>max(v[3],v[0]))cout<<"YES\n";
    else cout<<"NO\n";
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
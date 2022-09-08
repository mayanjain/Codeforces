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
    cin>>n;
    vector<vector<string>> v(3,vector<string>(n));
    map<string,int> mp;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<n ; j++){
            cin>>v[i][j];
            mp[v[i][j]]++;
        }
    }
    for(int i=0 ; i<3 ; i++){
        ll ans=0;
        for(auto& j:v[i]){
            if(mp[j]==1)ans+=3;
            else if(mp[j]==2)ans++;
        }
        cout<<ans<<" ";
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
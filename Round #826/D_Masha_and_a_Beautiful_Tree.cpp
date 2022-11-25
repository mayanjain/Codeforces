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
    vector<int> v(n);
    for(auto& i:v)cin>>i;
    for(ll i=2 ; i<=n ; i*=2){
        for(int j=0 ; j<n ; j+=i){
            bool ok=1;
            for(int x=j+1 ; x<j+i && ok ; x++){
                if(v[x]<v[x-1])ok=0;
            }
            if(!ok){
                for(int x=j ; x<j+i/2 ; x++){
                    swap(v[x],v[x+i/2]);
                }
                ans++;
            }
        }
    }
    auto z=v;
    sort(z.begin(),z.end());
    if(v==z)cout<<ans<<'\n';
    else cout<<"-1\n";
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
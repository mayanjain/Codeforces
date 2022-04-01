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
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void solve(){
    ll l,r;
    cin>>l>>r;
    vector<int> bits(20);
    vector<ll> v(r-l+1);
    for(auto& i:v){
        cin>>i;
        for(int j=0 ; j<20 ; j++){
            bits[j]+=(((1<<j)&i)?1:-1);
        }
    }
    ll x=0;
    for(int i=0 ; i<20 ; i++){
        if(bits[i]>0)x|=(1<<i);
    }
    cout<<x<<'\n';
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
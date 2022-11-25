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

bool solvin(ll a,ll b){
    cout<<"? "<<a<<" "<<b<<endl;
    ll n;
    cin>>n;
    return n!=-1;
}

void solve(){
    ll low=3,high=1e18,z=high/35;
    for(ll h=z ; h<=high ; h+=z){
        if(!solvin(1,h)){
            high=h;
            break;
        }
    }
    low=max(3LL,high-z);
    while(high-low>1){
        ll mid=(low+high)/2;
        if(solvin(low,mid))low=mid;
        else high=mid-1;
    }
    if(solvin(1,high))cout<<"! "<<high<<endl;
    else cout<<"! "<<low<<endl;
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
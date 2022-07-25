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
    ll n,m;
    cin>>n>>m;
    vector<ll> v(m),z(n);
    for(auto& i:v){
        cin>>i;
        z[i-1]++;
    }
    sort(z.begin(),z.end());
    ll low=1,high=1e9,ans=LONG_LONG_MAX,mid;
    while(low<high-1){
        mid=(low+high)/2;
        ll extra=0,left=0;
        for(auto& i:z){
            if(i<=mid){
                extra+=(mid-i)/2;
            }
            else left+=(i-mid);
        }
        if(extra>=left){
            high=mid;
        }
        else low=mid+1;
    }
    for(int mid=low ; mid<=high ; mid++){
        ll extra=0,left=0;
        for(auto& i:z){
            if(i<=mid){
                extra+=(mid-i)/2;
            }
            else left+=(i-mid);
        }
        if(extra>=left){
            cout<<mid<<'\n';
            return;
        }
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
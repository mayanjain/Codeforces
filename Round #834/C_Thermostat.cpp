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
    ll l,r,x,a,b;
    cin>>l>>r>>x>>a>>b;
    ll dif=abs(a-b);
    if(!dif)cout<<"0\n";
    else if(dif>=x)cout<<"1\n";
    else{
        if(r-a>=x && r-b>=x)cout<<"2\n";
        else if(a-l>=x && b-l>=x)cout<<"2\n";
        else if(a-l>=x && r-b>=x)cout<<"3\n";
        else if(r-a>=x && b-l>=x)cout<<"3\n";
        else cout<<"-1\n";
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
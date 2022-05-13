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
    string s;
    cin>>s;
    int n=s.size();
    int zero=0,ones=0;
    for(auto& i:s){
        if(i=='1')ones++;
    }
    int ans=ones,ls=0;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='0')zero++;
        else ones--;
        while(zero>ones){
            if(s[ls++]=='0')zero--;
            else ones++;
        }
        ans=min(ans,max(zero,ones));
    }
    cout<<ans<<'\n';
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
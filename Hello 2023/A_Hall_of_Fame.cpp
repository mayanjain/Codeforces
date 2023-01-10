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
    int l=0;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='L')l++;
    }
    if(l==n || l==0)cout<<"-1\n";
    else{
        for(int i=0 ; i<n-1 ; i++){
            if(s[i]=='R' && s[i+1]=='L'){
                cout<<"0\n";
                return;
            }
            if(s[i]=='L' && s[i+1]=='R'){
                cout<<i+1<<'\n';
                return;
            }
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
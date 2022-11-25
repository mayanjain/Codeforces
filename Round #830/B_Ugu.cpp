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
    string s;
    cin>>s;
    vector<int> zero(n),one(n);
    zero[n-1]=s[n-1]=='0';
    one[n-1]=s[n-1]=='1';
    for(int i=n-2 ; i>=0 ; i--){
        zero[i]=zero[i+1]+(s[i]=='0');
        one[i]=one[i+1]+(s[i]=='1');
    }
    bool cur=0;
    for(int i=0 ; i<n ; i++){
        if(!cur && s[i]=='1' && zero[i]>0){
            ans++;
            cur=1;
        }
        else if(cur && s[i]=='0' && one[i]>0){
            ans++;
            cur=0;
        }
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
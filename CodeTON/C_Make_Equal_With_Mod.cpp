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
    ll n;
    cin>>n;
    int one=0,zer=0;
    vector<ll> v(n);
    for(auto& i:v){
        cin>>i;
        if(i==1)one++;
        if(i==0)zer++;
    }
    if(one && zer){
        cout<<"NO\n";
    }
    else{
        if(!one){
            cout<<"YES\n";
        }
        else{
            sort(v.begin(),v.end());
            for(int i=1 ; i<n ; i++){
                if(v[i]-1==v[i-1]){
                    cout<<"NO\n";
                    return;
                }
            }
            cout<<"YES\n";
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
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

vector<ll> v;

void solve(){
    ll n;
    cin>>n;
    if(n%2){
        cout<<"2\n";
    }
    else{
        n--;
        for(int i=2 ; i<=800 && n>=0 ; i++){
            n-=i;
            if(n%i==0){
                cout<<i<<'\n';
                return;
            }
        }
        cout<<"-1\n";
    }
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    ll cur=1;

    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}    
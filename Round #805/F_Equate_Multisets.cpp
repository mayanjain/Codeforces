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
    ll n,x;
    cin>>n;
    multiset<ll> a,b;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        a.insert(x);
    }
    for(int i=0 ; i<n ; i++){
        cin>>x;
        if(a.count(x)){
            a.erase(a.lower_bound(x));
        }
        else b.insert(x);
    }
    while(a.size()){
        auto it=b.end();
        --it;
        auto val=*it;
        auto z=val;
        bool ok=0;
        while(*a.begin()<val && !ok){
            val/=2;
            if(a.count(val)){
                a.erase(a.lower_bound(val));
                b.erase(it);
                ok=1;
            }
        }
        if(!ok){
            auto it2=a.end();
            --it2;
            while(*it2>z && !ok){
                z*=2;
                if(a.count(z)){
                    a.erase(a.lower_bound(z));
                    b.erase(it);
                    ok=1;
                }
            }
        }
        if(!ok){
            cout<<"NOpe\n";
            return;
        }
    }
    cout<<"YES\n";
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
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
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n,vector<ll>(m));
    for(auto& i:v)for(auto& j:i)cin>>j;
    auto tv=v;
    for(auto& i:tv)sort(i.begin(),i.end());
    vector<ll> cur,zcur;
    ll count=0,x=0,y=0;
    multiset<vector<ll>> mt;
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cur.push_back(v[j][i]);
        }
        mt.insert(cur);
        cur.clear();
    }
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cur.push_back(v[j][i]);
            zcur.push_back(tv[j][i]);
        }
        if(cur!=zcur){
            if(!mt.count(zcur)){
                cout<<"-1\n";
                return;
            }
            else mt.erase(mt.lower_bound(zcur));
            count++;
            if(x)y=i+1;
            else x=i+1;
        }
        if(count>2){
            cout<<"-1\n";
            return;
        }
        cur.clear();
        zcur.clear();
    }
    if(x==y && x==0)x++,y++;
    cout<<x<<" "<<y<<'\n';
    
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
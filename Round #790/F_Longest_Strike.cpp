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
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    map<ll,ll> mp;
    for(auto& i:v){
        cin>>i;
        mp[i]++;
    }
    ll ls=0,cur=0,ans=0;
    pair<int,int> p=make_pair(0,0);
    for(auto& i:mp){
        if(i.first==ls+1 && i.second>=k)cur++;
        else{
            ans=max(ans,cur);
            if(ans==cur){
                p=make_pair(ls-cur+1,ls);
            }
            if(i.second>=k)cur=1;
            else cur=0;
        }
        ls=i.first;
    }
    ans=max(ans,cur);
    if(ans==cur)p={ls-cur+1,ls};
    if(ans)cout<<p.first<<" "<<p.second<<'\n';
    else cout<<"-1\n";
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
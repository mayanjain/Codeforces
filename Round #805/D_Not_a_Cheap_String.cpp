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
    string s;
    ll p;
    cin>>s>>p;
    map<char,int> mp;
    priority_queue<int> pq;
    ll sum=0;
    for(auto& i:s){
        pq.push(i);
        sum+=(i-'a'+1);
    }
    while(pq.size() && sum>p){
        sum-=(pq.top()-'a'+1);
        mp[pq.top()]++;
        pq.pop();
    }
    for(auto& i:s){
        if(mp[i]==0)cout<<i;
        else mp[i]--;
    }    
    cout<<'\n';
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
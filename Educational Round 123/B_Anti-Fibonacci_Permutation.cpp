#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void solvin(vector<vector<ll>>& v,vector<ll>& cur,vector<bool>& used,ll n){
    if(v.size()==n)return;
    if(cur.size()==n){
        v.push_back(cur);
        return;
    }
    ll cs=cur.size();
    for(ll i=1 ; i<=n ; i++){
        if(used[i])continue;
        if(cs>=2 && cur[cs-1]+cur[cs-2]==i)continue;
        cur.push_back(i);
        used[i]=1;
        solvin(v,cur,used,n);
        used[i]=0;
        cur.pop_back();
    }
}

void solve(){
    ll n;
    cin>>n;
    vector<vector<ll>> v;
    vector<ll> cur;
    vector<bool> used(n+1,0);
    solvin(v,cur,used,n);
    for(auto& c:v){
        for(auto& i:c)cout<<i<<" ";
        cout<<"\n";
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
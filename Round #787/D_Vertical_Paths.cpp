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

vector<vector<int>> ans;

void solvin(int root,vector<vector<int>>& v,vector<int>& cur){
    cur.push_back(root);
    if(v[root].size()==0){
        ans.push_back(cur);
        return;
    }
    for(auto& i:v[root]){
        solvin(i,v,cur);
        cur.clear();
    }
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> parent(n);
    for(auto& i:parent){
        cin>>i;
        --i;
    }
    vector<vector<int>> v(n);
    int start=0;
    for(int i=0 ; i<n ; i++){
        if(parent[i]!=i)v[parent[i]].push_back(i);
        else start=i;
    }
    vector<int> cur;
    solvin(start,v,cur);
    cout<<ans.size()<<'\n';
    for(auto& i:ans){
        cout<<i.size()<<'\n';
        for(auto& j:i)cout<<j+1<<" ";
        cout<<'\n';
    }
    cout<<'\n';
    ans.clear();
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
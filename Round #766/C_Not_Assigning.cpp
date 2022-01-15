#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

map<pair<int,int>,int> mp;

void solvin(int cur,int next,vector<set<int>>& v,int last){
    int x=cur,y=next;
    if(x<y)swap(x,y);
    if(last==2)mp[{x,y}]=3;
    else mp[{x,y}]=2;
    v[next].erase(cur);
    if(v[next].size())solvin(next,*v[next].begin(),v,mp[{x,y}]);
}

void solve(){
    int n,x,y;
    cin>>n;
    mp.clear();
    vector<set<int>> v(n+1);
    vector<pair<int,int>> edges;
    for(int i=1 ; i<n ; i++){
        cin>>x>>y;
        v[x].insert(y);
        v[y].insert(x);
        if(x<y)swap(x,y);
        edges.push_back({x,y});
    }
    for(int i=1 ; i<=n ; i++){
        if(v[i].size()>2){
            cout<<"-1\n";
            return;
        }
    }
    for(int i=1 ; i<=n ; i++){
        if(v[i].size()==1){
            solvin(i,*v[i].begin(),v,3);
            break;
        }
    }
    for(auto& i:edges){
        cout<<mp[i]<<" ";
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
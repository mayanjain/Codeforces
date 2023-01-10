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

bool cmp(pair<int,vector<int>>& v,pair<int,vector<int>>& z){
    int vx=0,zx=0;
    for(auto& i:v.second)vx+=i;
    for(auto& i:z.second)zx+=i;
    return vx>zx;
}

void solve(){
    int n,m,ones=0;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0 ; i<n ; i++){
        for(auto& j:v[i]){
            cin>>j;
            ones+=j;
        }
    }
    vector<pair<int,vector<int>>> z;
    for(int i=0 ; i<n ; i++){
        z.push_back({i+1,v[i]});
    }
    sort(z.begin(),z.end(),cmp);
    if(ones%n)cout<<"-1\n";
    else{
        ones/=n;
        int low=0,high=n-1;
        vector<vector<int>> ans;
        while(low<high){
            int oneslow=0,oneshigh=0;
            for(auto& i:z[low].second)oneslow+=i;
            for(auto& i:z[high].second)oneshigh+=i;
            for(int i=0 ; i<m && oneslow!=ones && oneshigh!=ones ; i++){
                if(z[low].second[i]==1 && z[high].second[i]==0){
                    ans.push_back({z[low].first,z[high].first,i+1});
                    oneslow--;
                    oneshigh++;
                    z[low].second[i]--;
                    z[high].second[i]++;
                }
            }
            if(oneslow==ones)low++;
            if(oneshigh==ones)high--;
        }
        cout<<ans.size()<<"\n";
        for(auto& i:ans){
            for(auto& j:i)cout<<j<<" ";
            cout<<'\n';
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
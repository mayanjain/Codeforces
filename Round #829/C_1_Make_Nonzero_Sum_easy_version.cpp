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
    int n,sum=0;
    cin>>n;
    vector<int> v(n);
    for(auto& i:v){
        cin>>i;
        sum+=i;
    }
    if(sum%2)cout<<"-1\n";
    else{
        vector<pair<int,int>> ans;
        for(int i=1 ; i<n && sum; i++){
            if(sum<0 && v[i]==-1){
                ans.push_back({i,i+1});
                sum+=2;
                i++;
            }
            if(sum>0 && v[i]==1){
                ans.push_back({i,i+1});
                sum-=2;
                i++;
            }
        }
        if(sum)cout<<"-1\n";
        else{
            int ls=0;
            vector<pair<int,int>> res;
            for(auto& i:ans){
                for(int j=ls+1 ; j<i.first ; j++){
                    res.push_back({j,j});
                }
                res.push_back({i.first,i.second});
                ls=i.second;
            }
            for(int i=ls+1 ; i<=n; i++){
                res.push_back({i,i});
            }
            cout<<res.size()<<'\n';
            for(auto& i:res){
                cout<<i.first<<" "<<i.second<<'\n';
            }
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
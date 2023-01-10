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
    int k,n;
    cin>>k>>n;
    vector<int> ans;
    int cur=1;
    ans.push_back(1);
    while(ans.size()<k){
        int next=ans.back()+cur++;
        if((n-next)>=(k-(int(ans.size())+1))){
            ans.push_back(next);
        }
        else{
            while(ans.size()<k){
                ans.push_back(ans.back()+1);
            }
        }
    }
    for(auto& i:ans)cout<<i<<" ";
    cout<<"\n";
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
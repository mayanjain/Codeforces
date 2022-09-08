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
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto& i:v)cin>>i;
    auto z=v;
    sort(z.begin(),z.end());
    if(v==z){
        cout<<"0\n";
        return;
    }
    set<int> zero;
    bool x=true;
    int ls=0;
    while(x){
        x=false;
        for(int i=n-2 ; i>=0 ; i--){
            if(v[i]>v[i+1]){
                for(int j=i ; j>=ls ; j--){
                    if(v[j])zero.insert(v[j]);
                }
                ls=i+1;
                x=true;
                break;
            }
        }
        for(auto& i:v){
            if(zero.count(i))i=0;
        }
    }
    cout<<zero.size()<<'\n';
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
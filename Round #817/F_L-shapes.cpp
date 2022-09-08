
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

void solvin(int i,int j,vector<string>& v,int& cnt){
    int n=v.size(),m=v[0].size();
    if(i==n || i==-1 || j==m || j==-1 || v[i][j]!='*')return;
    cnt++;
    v[i][j]='$';
    solvin(i+1,j,v,cnt);
    solvin(i+1,j+1,v,cnt);
    solvin(i+1,j-1,v,cnt);
    solvin(i,j+1,v,cnt);
    solvin(i,j-1,v,cnt);
    solvin(i-1,j,v,cnt);
    solvin(i-1,j-1,v,cnt);
    solvin(i-1,j+1,v,cnt);
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(auto& i:v)cin>>i;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(v[i][j]=='*'){
                int cnt=0;
                solvin(i,j,v,cnt);
                if(cnt!=3){
                    cout<<"NO\n";
                    return;
                }
                if(j && i<n-1 && v[i+1][j]=='$' && v[i+1][j-1]=='$'){}
                else if(j<m-1 && i<n-1 && ((v[i+1][j+1]=='$' && (v[i+1][j]=='$' || v[i][j+1]=='$')) || (v[i][j+1]=='$' && v[i+1][j]=='$'))){}
                else{
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
    cout<<"YES\n";
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
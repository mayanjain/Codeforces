#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(auto& i:v)cin>>i;
    if(v[0][0]=='1')cout<<"-1\n";
    else{
        vector<vector<ll>> ans;
        for(int i=n-1 ; i>=0 ; i--){
            for(int j=m-1 ; j>=0 ; j--){
                if(v[i][j]=='1'){
                    if(j!=0){
                        ans.push_back({i,j-1,i,j});
                    }
                    else{
                        ans.push_back({i-1,j,i,j});
                    }
                }
            }
        }
        cout<<ans.size()<<"\n";
        for(auto& i:ans){
            for(auto& j:i)cout<<j+1<<" ";
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
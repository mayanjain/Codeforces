#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
#define mod 1000000007
#define mod1 998244353
ll lcm(ll a,ll b){return (a/__gcd(a,b))*b;}

void solve(){
    ll n;
    cin>>n;
    vector<string> v(n-2);
    for(auto& i:v)cin>>i;
    int ans=0;
    for(int i=0 ; i<v.size()-1 ; i++){
        cout<<v[i][0];
        if(v[i][1]!=v[i+1][0]){
            cout<<v[i][1];
            ans=1;
        }
    }
    cout<<v[n-3];
    if(!ans){
        cout<<"b";
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
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    ll x,cur,ans=0;
    for(int i=0 ; i<31 ; i++){
        x=1<<i;
        cur=0;
        for(auto& i:v){
            if((i&x)){
                cur++;
            }
        }
        ans=__gcd(ans,cur);
    }
    if(ans==0){
        for(int i=1 ; i<=n ; i++){
            cout<<i<<" ";
        }
        cout<<'\n';
        return;
    }
    for(int i=1 ; i<=ans ; i++){
        if(ans%i==0)cout<<i<<" ";
    }
    cout<<'\n';
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    int k=1;
    while(t--){
        solve();
    }
    return 0;
}    
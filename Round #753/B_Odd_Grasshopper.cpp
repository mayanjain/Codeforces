#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    ll x,n;
    cin>>x>>n;
    ll ans=x;
    if(x%2){
        if(n%4==1)ans+=n;
        if(n%4==2)ans-=1;
        if(n%4==3)ans-=n+1;
    }
    else{
        if(n%4==1)ans-=n;
        if(n%4==2)ans+=1;
        if(n%4==3)ans+=n+1;
    }
    cout<<ans<<'\n';
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
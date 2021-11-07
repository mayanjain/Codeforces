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
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    ll sub=0;
    for(int i=n-1 ; i>0 ; i--){
        if(v[i]-sub<0){
            v[i]-=sub;
            sub+=v[i];
            v.pop_back();
        }
        else break;
    }
    for(int i=0 ; i<v.size() ; i++){
        v[i]-=sub;
    }
    sort(v.begin(),v.end());
    ll ans=v[0];
    sub=0;
    for(int i=0 ; i+1<v.size() ; i++){
        sub+=v[i];
        v[i+1]-=sub;
        ans=max(ans,v[i+1]);
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
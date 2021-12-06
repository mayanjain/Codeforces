#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
const int mod = 1e9 + 7;

void solve(){
    ll n,h;
    cin>>n>>h;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    ll mid,high=h,low=0,ans;
    if(n==1){
        cout<<h<<'\n';
        return;
    }
    while(low<high){
        mid=low+(high-low)/2;
        ans=0;
        for(int i=1 ; i<n ; i++){
            ans+=min(mid,v[i]-v[i-1]);
        }
        ans+=mid;
        if(ans>=h)high=mid;
        else low=mid+1;
    }
    cout<<low<<'\n';
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
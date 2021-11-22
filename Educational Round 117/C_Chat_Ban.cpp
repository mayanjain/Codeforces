#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    ll k,x;
    cin>>k>>x;
    ll l=1,r=2*k-1;
    ll mx=2*k-1;
    while(l<r){
        ll mid=(l+r)/2;
        ll emo=0;
        if(mid>=k){
            emo+=(k*(k+1))/2;
            emo+=(k*(k-1))/2-((mx-mid)*(mx-mid+1))/2;
        }
        else{
            emo+=(mid*(mid+1))/2;
        }
        if(emo<x){
            l=mid+1;
        }
        else if(emo==x){
            cout<<mid<<'\n';
            return;
        }
        else{
            r=mid;
        }
    }
    cout<<l<<'\n';
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
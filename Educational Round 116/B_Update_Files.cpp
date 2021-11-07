#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll h=1;
    ll time=0;
    while(h<=k && h<n){
        h*=2;
        time++;
    }
    if(h<n)
        time+=(n-h)/k+((n-h)%k!=0);
    cout<<time<<"\n";
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
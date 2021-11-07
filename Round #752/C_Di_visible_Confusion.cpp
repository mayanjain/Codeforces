#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

long long lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n+2);
    for(int i=2 ; i<n+2 ; i++){
        cin>>v[i];
    }
    bool ans=true;
    vector<int> lms(n+2);
    lms[1]=1;
    for(int i=2 ; i<n+2 ; i++){
        lms[i]=lcm(i,lms[i-1]);
        // cout<<lms[i]<<" ";
    }
    for(int i=n+1 ; i>1 ; i--){
        if(v[i]%lms[i]==0){
            ans=false;
            break;
        }
    }
    if(ans)cout<<"YES\n";
    else cout<<"NO\n";
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
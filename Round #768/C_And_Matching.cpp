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
    ll n,k;
    cin>>n>>k;
    if(k==n-1){
        if(n==4){
            cout<<"-1\n";
            return;
        }
        cout<<n-1<<" "<<n-2<<'\n';
        cout<<1<<" "<<n-3<<'\n';
        cout<<2<<" "<<0<<'\n';
        for(int i=3 ; i<=(n-2)/2 ; i++){
            cout<<i<<" "<<(i^(n-1))<<'\n';
        }
    }
    else{
        cout<<n-1<<" "<<k<<'\n';
        for(int i=1 ; i<n/2 ; i++){
            if(i==k){
                cout<<((n-1)^i)<<" "<<0<<"\n";
            }
            else if(((n-1)^i)==k){
                cout<<i<<" "<<0<<"\n";
            }
            else cout<<i<<" "<<((n-1)^i)<<'\n';
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
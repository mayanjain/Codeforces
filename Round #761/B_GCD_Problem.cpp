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
    ll n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<" "<<n/2-1<<" "<<1<<'\n';
        return;
    }
    else{
        n--;
        ll x=500;
        for(int i=max(0LL,n/2-x) ; i<=n/2 ; i++){
            if(gcd(i,n-i)==1 && i!=1 && n-i!=1){
                cout<<i<<" "<<n-i<<" "<<1<<'\n';
                return;
            }
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
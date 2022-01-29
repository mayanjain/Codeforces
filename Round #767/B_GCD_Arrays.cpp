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
    ll l,r,k;
    cin>>l>>r>>k;
    ll t=r-l+1;
    if(t==1 && l!=1){
        cout<<"YES\n";
    }
    else if(t%2==0 && k>=t/2){
        cout<<"YES\n";
    }
    else if(t%2 && l%2 && k>t/2){
        cout<<"YES\n";
    }
    else if(t%2 && l%2==0 && k>=t/2){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
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
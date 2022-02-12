#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

// wrong answer

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    for(auto& i:a)cin>>i;
    for(auto& i:b)cin>>i;
    ll ans=0;
    for(int i=0 ; i<n ; i++){
        ans+=(n-1)*(a[i]*a[i]);
        ans+=(n-1)*(b[i]*b[i]);
    }
    ll cur=0;
    ll a1=a[0],b1=b[0];
    for(int i=1 ; i<n ; i++){
        if(a1*a[i]+b1*b[i]>a1*b[i]+b1*a[i]){
            swap(a1,b1);
        }
        cur+=(a1*a[i])+(b1*b[i]);
        a1+=a[i];b1+=b[i];
    }
    a1=a[n-1],b1=b[n-1];
    ll cur2=0;
    for(int i=n-2 ; i>=0 ; i--){
        if(a1*a[i]+b1*b[i]>a1*b[i]+b1*a[i]){
            swap(a1,b1);
        }
        cur2+=(a1*a[i])+(b1*b[i]);
        a1+=a[i];b1+=b[i];
    }
    cout<<ans+2*min(cur,cur2)<<'\n';
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
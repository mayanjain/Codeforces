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
    ll x=log2(n-1);
    x=(1LL<<x);
    ll c=n-x;
    set<ll> st;
    for(ll i=x ; i<n ; i++,c++){
        if(c%2)cout<<i<<" "<<(i^x)<<" ";
        else cout<<(i^x)<<" "<<i<<" ";
        st.insert(i);
        st.insert((i^x));
    }
    for(ll i=0 ; i<n ; i++){
        if(st.count(i))continue;
        cout<<i<<" ";
    }
    cout<<'\n';
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
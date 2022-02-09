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
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll> v(n);
    ll odd=0;
    for(auto& i:v){
        cin>>i;
        if(i%2)odd++;
    }
    if(x%2)odd++;
    if(y%2==odd%2)cout<<"Alice\n";
    else cout<<"Bob\n";
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
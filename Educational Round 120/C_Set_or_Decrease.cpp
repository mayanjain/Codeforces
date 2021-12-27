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
    vector<ll> v(n);
    ll sum=0;
    for(auto& i:v)cin>>i,sum+=i;
    sort(v.begin(),v.end());
    if(sum<=k)cout<<"0\n";
    else{
        ll ans=sum-k,count=0;
        for(int i=n-1 ; i>0 ; i--){
            count++;
            sum-=(v[i]-v[0]);
            ll cur=max(0LL,(sum-k+count)/(count+1));
            ans=min(ans,cur+count);
        }
        cout<<ans<<'\n';
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
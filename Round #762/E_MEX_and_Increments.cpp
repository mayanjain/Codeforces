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
    vector<ll> v(n);
    vector<ll> count(n+1);
    for(auto& i:v){
        cin>>i;
        count[i]++;
    }
    vector<ll> prev,ans(n+1,-1);
    ll sum=0;
    for(int i=0 ; i<=n ; i++){
        if(i>0 && !count[i-1]){
            if(prev.size()==0)break;
            int j=prev[prev.size()-1];
            prev.pop_back();
            sum+=i-j-1;
        }
        ans[i]=sum+count[i];
        while(i>0 && count[i-1]>1){
            count[i-1]--;
            prev.push_back(i-1);
        }
    }
    for(auto& i:ans)cout<<i<<" ";
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
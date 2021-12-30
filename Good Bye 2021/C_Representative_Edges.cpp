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
    int n;
    cin>>n;
    vector<double> v(n);
    for(auto& i:v)cin>>i;
    int ans=INT_MAX;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            int cur=0;
            for(ll k=0;k<n;k++) {
                if((v[k]-v[i])*(j-i)!=(v[j]-v[i])*(k-i)){
                    cur++;
                }
            }
            ans=min(ans,cur);
        }
    }
    if(n==1)ans=0;
    cout<<ans<<endl;
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
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
    for(auto& i:v)cin>>i;
    if(v[n-1]<0){
        for(int i=1 ; i<n ; i++){
            if(v[i]<v[i-1]){
                cout<<"-1\n";
                return;
            }
        }
        cout<<"0\n";
        return;
    }
    for(int i=n-3 ; i>=0 ; i--){
        v[i]=v[i+1]-v[n-1];
    }
    for(int i=1 ; i<n ; i++){
        if(v[i]<v[i-1]){
            cout<<"-1\n";
            return;
        }
    }
    cout<<n-2<<'\n';
    for(int i=n-2 ; i>0 ; i--){
        cout<<i<<" "<<i+1<<" "<<n<<"\n";
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
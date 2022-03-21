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
    ll n,m;
    cin>>n>>m;
    vector<string> v(n);
    for(auto& i:v)cin>>i;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            int k=i;
            int x=0,y=0;
            while(k<n && v[k][j]=='1'){
                if(j>0 && v[k][j-1]=='1')x++;
                if(j<m-1 && v[k][j+1]=='1')y++;
                k++;
            }
            if((k-i==x || x==0) && (k-i==y || y==0))continue;
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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
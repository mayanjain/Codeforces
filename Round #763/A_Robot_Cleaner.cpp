#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

int solvin(int n,int m,int r,int b,int c, int d,int dr,int db){
    if(r==c || b==d)return 0;
    if(r==n){
        dr=-1;
    }
    if(b==m){
        db=-1;
    }
    if(r==1){
        dr=1;
    }
    if(b==1){
        db=1;
    }
    return solvin(n,m,r+dr,b+db,c,d,dr,db)+1;
}

void solve(){
    int n,m,r,b,c,d;
    cin>>n>>m>>r>>b>>c>>d;
    cout<<solvin(n,m,r,b,c,d,1,1)<<"\n";
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
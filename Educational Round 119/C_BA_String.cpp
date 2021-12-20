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
    ll n,k,x;
    cin>>n>>k>>x;
    string s;
    cin>>s;
    ll cur=0;
    x--;
    for(int i=n-1 ; i>=0 ; i--){
        if(s[i]=='a')break;
        cur+=k;
    }
    if(cur>=x){
        for(int i=0 ; i<n ; i++){
            if(s[i]=='a')cout<<'a';
        }
        while(x--){
            cout<<'b';
        }
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
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
    int n,r;
    cin>>n>>r;
    if(r<=(n+1)/2){
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n; j++){
                if(i==j && i%2==0 && r){
                    cout<<'R';
                    r--;
                }
                else cout<<'.';
            }
            cout<<'\n';
        }
    }
    else cout<<"-1\n";
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
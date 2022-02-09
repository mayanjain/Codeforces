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
    if(n==1 && k==1){
        cout<<"YES\n1\n";
    }
    else if(n==1){
        cout<<"NO\n";
    }
    else if(k==1){
        cout<<"YES\n";
        for(int i=1 ; i<=n ; i++)cout<<i<<'\n';
    }
    else{
        if(n%2==0){
            cout<<"YES\n";
            ll odd=1,even=2;
            for(int i=0 ; i<n/2 ; i++){
                for(int j=0 ; j<k ; j++){
                    cout<<odd<<" ";
                    odd+=2;
                }
                cout<<'\n';
            }
            for(int i=0 ; i<n/2 ; i++){
                for(int j=0 ; j<k ; j++){
                    cout<<even<<" ";
                    even+=2;
                }
                cout<<"\n";
            }
        }
        else cout<<"NO\n";
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
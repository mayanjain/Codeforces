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
    string s="";
    if(n<=2){
        cout<<n<<'\n';
        return;
    }
    char c='2';
    while(n>0){
        s+=c;
        if(c=='2'){
            n--;
            c='1';
        }
        else{
            c='2';
        }
        n--;
    }
    if(n==0)cout<<s<<'\n';
    else{
        if(s.back()=='2'){
            for(auto& i:s){
                if(i=='2')cout<<1;
                else cout<<2;
            }
            cout<<'\n';
        }
        else{
            reverse(s.begin(),s.end());
            cout<<s<<"\n";
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
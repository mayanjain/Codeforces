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
    string s;
    cin>>s;
    string k="";
    k+=s[0];
    if(n>1 && s[0]==s[1]){
        cout<<k<<k<<'\n';
        return;
    }
    for(int i=1 ; i<n ; i++){
        if(s[i]<=s[i-1]){
            k+=s[i];
        }
        else break;
    }
    cout<<k;
    reverse(k.begin(),k.end());
    cout<<k<<'\n';
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
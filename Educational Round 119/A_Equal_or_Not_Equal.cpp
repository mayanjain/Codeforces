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
    string s;
    cin>>s;
    if(s.size()==2){
        if(s[0]!=s[1])cout<<"NO\n";
        else cout<<"YES\n";
    }
    else{
        int n=0;
        for(int i=0 ; i<s.size()-1 ; i++){
            if(s[i]=='N')n++;
        }
        if(n==0){
            if(s[s.size()-1]=='N')cout<<"NO\n";
            else cout<<"YES\n";
        }
        else if(n==1){
            if(s[s.size()-1]=='E')cout<<"NO\n";
            else cout<<"YES\n";
        }
        else cout<<"YES\n";
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
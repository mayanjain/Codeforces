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
    int cur;
    for(int i=s.size()-1 ; i>=1 ; i--){
        cur=s[i]-'0'+s[i-1]-'0';
        if(cur>=10){
            for(int j=0 ; j<i-1 ; j++)cout<<s[j];
            cout<<cur;
            for(int j=i+1 ; j<s.size() ; j++)cout<<s[j];
            cout<<'\n';
            return;
        }
    }
    cout<<cur;
    for(int i=2 ; i<s.size() ; i++)cout<<s[i];
    cout<<'\n';
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
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
    set<char> st;
    for(auto& i:s){
        if(i=='R' && !st.count('r')){
            cout<<"NO\n";
            return;
        }
        if(i=='B' && !st.count('b')){
            cout<<"NO\n";
            return;
        }
        if(i=='G' && !st.count('g')){
            cout<<"NO\n";
            return;
        }
        st.insert(i);
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
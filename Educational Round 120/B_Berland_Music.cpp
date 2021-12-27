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
    vector<pair<ll,ll>> v(n);
    for(int i=0 ; i<n ; i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    string s;
    cin>>s;
    sort(v.begin(),v.end());
    unordered_set<ll> st;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='0')st.insert(i);
    }
    ll k=1;
    for(int i=0 ; i<n ; i++){
        if(st.count(v[i].second))v[i].first=k++;
    }
    vector<ll> ans(n);
    for(int i=0 ; i<n ; i++){
        if(!st.count(v[i].second))v[i].first=k++;
        ans[v[i].second]=v[i].first;
    }
    for(auto& i:ans)cout<<i<<" ";
    cout<<"\n";
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
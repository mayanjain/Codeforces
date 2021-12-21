#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

vector<ll> v;

void solve(){
    int n;
    cin>>n;
    cout<<upper_bound(v.begin(),v.end(),n)-v.begin()<<"\n";
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_set<ll> st;
    for(ll i=1 ; i*i<=1e9 ; i++){
        st.insert(i*i);
        if((i*i*i)<=(1e9))st.insert(i*i*i);
    }
    for(auto& i:st)v.push_back(i);
    sort(v.begin(),v.end());
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}    
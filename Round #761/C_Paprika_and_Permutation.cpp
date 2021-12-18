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
    ll n,x;
    cin>>n;
    vector<ll> v;
    set<ll> st;
    for(int i=1 ; i<=n ; i++)st.insert(i);
    for(int i=0 ; i<n ; i++){
        cin>>x;
        if(st.count(x)){
            st.erase(x);
        }
        else{
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    auto it=st.begin();
    for(int i=0 ; i<v.size() ; i++){
        if((v[i]+1)/2<=*it){
            cout<<"-1\n";
            return;
        }
        // cout<<(*it)<<" ";
        it++;
    }
    cout<<v.size()<<'\n';
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
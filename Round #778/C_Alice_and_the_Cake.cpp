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
    ll n,sum=0;
    cin>>n;
    vector<ll> v(n);
    for(auto& i:v){
        cin>>i;
        sum+=i;
    }
    multiset<ll> st;
    sort(v.begin(),v.end());
    st.insert(sum);
    // cout<<sum<<"  ";
    for(int i=n-1 ; i>=0 ; i--){
        auto it=st.end();
        --it;
        while(*it>v[i]){
            st.insert(*it/2);
            st.insert((*it+1)/2);
            st.erase(it);
            it=st.end();
            --it;
            // cout<<*it<<"  ";
        }
        // cout<<*it<<" ";
        if(*it==v[i]){
            st.erase(it);
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    // cout<<st.size()<<"   ";
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
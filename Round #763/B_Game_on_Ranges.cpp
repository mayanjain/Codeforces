#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

bool cmp(pair<int,int>& p,pair<int,int>& z){
    if(p.first==z.first){
        return p.second>z.second;
    }
    return p.first<z.first;
}

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(auto& i:v){
        cin>>i.first>>i.second;
    }
    sort(v.begin(),v.end(),cmp);
    unordered_set<int> st;
    for(int i=1 ; i<=n ; i++)st.insert(i);
    for(int i=1 ; i<n ; i++){
        if(v[i].first!=v[i-1].first){
            cout<<v[i-1].first<<" "<<v[i-1].second<<" "<<v[i-1].first<<"\n";
            st.erase(v[i-1].first);
        }
        else{
            cout<<v[i-1].first<<" "<<v[i-1].second<<" "<<v[i].second+1<<"\n";
            st.erase(v[i].second+1);
        }
    }
    cout<<v[n-1].first<<" "<<v[n-1].second<<" "<<*st.begin()<<'\n';
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
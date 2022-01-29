#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

bool cmp(pair<int,int>& p,pair<int,int>& q){
    if(p.first!=q.first)return p.first<q.first;
    return p.second>q.second;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for(int i=0 ; i<n ; i++)cin>>v[i].first;
    for(int i=0 ; i<n ; i++)cin>>v[i].second;
    sort(v.begin(),v.end(),cmp);
    for(int i=0 ; i<n ; i++){
        if(k<v[i].first){
            break;
        }
        k+=v[i].second;
    }
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
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
    vector<int> v(n);
    map<int,int> mp;
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
        mp[v[i]]=i;
    }
    vector<int> ans;
    for(int i=n-1 ; i>=0 ; i--){
        auto x=mp[i+1];
        if(x==i){
            ans.push_back(0);
            continue;
        }
        ans.push_back(x+1);
        vector<int> nv(i+1);
        for(int j=0 ; j<=i ; j++){
            nv[j]=v[(j+x+1)%(i+1)];
            mp[nv[j]]=j;
        }
        for(int j=0 ; j<=i ; j++){
            v[j]=nv[j];
        }
    }
    for(int i=n-1 ; i>=0 ; i--)cout<<ans[i]<<" ";
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
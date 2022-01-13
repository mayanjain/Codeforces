#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

int query(int x){
    cout<<"? "<<x<<endl;
    cin>>x;
    return x;
}

void solve(){
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1 ; i<=n ; i++){
        if(!v[i]){
            vector<int> cycle;
            int cur=query(i);
            int x=query(i);
            cycle.push_back(x);
            while(x!=cur){
                x=query(i);
                cycle.push_back(x);
            }
            for(int j=0 ; j<cycle.size() ; j++){
                v[cycle[j]]=cycle[(j+1)%cycle.size()];
            }
        }
    }
    cout<<"! ";
    for(int i=1 ; i<=n ; i++)cout<<v[i]<<" ";
    cout<<endl;
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
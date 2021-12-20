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
    vector<int> last(5*(1e5+1));
    for(int i=1 ; i<last.size() ; i++)last[i]=i;
    vector<vector<int>> q(n);
    int x,y;
    for(int i=n-1 ; i>=0 ; i--){
        cin>>x;
        q[i].push_back(x);
        if(x==1){
            cin>>x;
            q[i].push_back(x);
        }
        else{
            cin>>x>>y;
            q[i].push_back(x);
            q[i].push_back(y);
        }
    }
    vector<int> ans;
    for(int i=0 ; i<n ; i++){
        if(q[i][0]==1){
            x=q[i][1];
            ans.push_back(last[x]);
        }
        else{
            x=q[i][1];
            y=q[i][2];
            last[x]=last[y];
        }
    }
    reverse(ans.begin(),ans.end());
    for(auto& i:ans)cout<<i<<" ";
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}    
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
    vector<string> v(n);
    map<string,int> mp;
    bool ans=false;
    for(auto& i:v){
        cin>>i;
        mp[i]++;
        if(!ans){
            reverse(i.begin(),i.end());
            if(i.size()==2){
                for(char j='a' ; j<='z'; j++){
                    i+=j;
                    // cout<<i<<" ";
                    if(mp.count(i))ans=true;
                    i.pop_back();
                }
            }
            if(mp.count(i))ans=true;
            i.pop_back();
            if(mp.count(i))ans=true;
        }
    }
    if(ans)cout<<"YES\n";
    else cout<<"NO\n";
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
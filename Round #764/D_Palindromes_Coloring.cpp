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
    int n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    vector<int> v(26);
    for(auto& i:s){
        v[i-'a']++;
    }
    int singles=0,doubles=0;
    for(auto& i:v){
        if(i%2){
            singles++;
            i--;
        }
        doubles+=i;
    }
    doubles/=2;
    int mn=2*(doubles/x);
    doubles=2*(doubles%x);
    singles+=doubles;
    if(singles>=x)mn++;
    cout<<mn<<'\n';
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
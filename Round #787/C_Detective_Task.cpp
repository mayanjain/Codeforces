#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    if(n==1){
        cout<<"1\n";
        return;
    }
    vector<int> one(n),zero(n),que(n);
    for(int i=0 ; i<n ; i++){
        if(s[i]=='1'){
            one[i]++;
        }
        else if(s[i]=='0'){
            zero[i]++;
        }
        else{
            que[i]++;
        }
        if(i){
            one[i]+=one[i-1];
            zero[i]+=zero[i-1];
            que[i]+=que[i-1];
        }
    }
    int ans=0;
    for(int i=0 ; i<n ; i++){
        int zeroright=zero[n-1]-zero[i]+que[n-1]-que[i];
        int oneleft=0;
        if(i)oneleft=one[i-1]+que[i-1];
        if(oneleft==i && zeroright==n-i-1)ans++;
    }
    cout<<ans<<'\n';
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
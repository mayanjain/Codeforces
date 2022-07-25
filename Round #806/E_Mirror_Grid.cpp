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
#define ordered_multiset tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void solve(){
    int n,ans=0;
    cin>>n;
    vector<string> v(n);
    for(auto& i:v)cin>>i;
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j<n ; j++){
            map<char,int> count;
            count[v[i][j]]++;
            count[v[n-i-1][n-j-1]]++;
            count[v[n-j-1][i]]++;
            count[v[j][n-i-1]]++;
            if(count['1']>=count['0']){
                v[i][j]='1';
                v[n-i-1][n-j-1]='1';
                v[n-j-1][i]='1';
                v[j][n-i-1]='1';
                ans+=count['0'];
            }
            else{
                v[i][j]='0';
                v[n-i-1][n-j-1]='0';
                v[n-j-1][i]='0';
                v[j][n-i-1]='0';
                ans+=count['1'];
            }
        }
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
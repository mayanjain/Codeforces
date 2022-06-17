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
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> z(10);
    for(auto& i:v){
        cin>>i;
        z[i%10]++;
    }
    for(int i=0 ; i<10 ; i++){
        z[i]--;
        for(int j=i ; j<10 ; j++){
            z[j]--;
            for(int k=j ; k<10 ; k++){
                z[k]--;
                if((i+j+k)%10==3 && z[i]>=0 && z[j]>=0 && z[k]>=0){
                    cout<<"YES\n";
                    return;
                }
                z[k]++;
            }
            z[j]++;
        }
        z[i]++;
    }
    cout<<"NO\n";
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
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
    vector<int> v;
    if(n%2){
        if(n==3){
            cout<<"2 1 3\n";
            return;
        }
        cout<<"0 ";
        n--;
    }
    int x=1<<28,y=1<<29,xr=0,yr=0,z=0;
    if((n/2)%2){
        v={x,y,x+1,y+x/2+1,x+2,x+x/2+2};
        n-=6;
        z=3;
    }
    for(int i=0 ; i<n/2 ; i++){
        v.push_back(x+z);
        v.push_back(y+z++);
    }
    for(auto& i:v)cout<<i<<" ";
    // for(int i=0 ; i<v.size() ; i++){
    //     if(i%2)xr^=v[i];
    //     else yr^=v[i];
    // }
    // cout<<xr<<" "<<yr<<"\n";
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
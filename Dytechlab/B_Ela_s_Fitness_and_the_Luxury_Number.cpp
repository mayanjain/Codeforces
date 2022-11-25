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
    ll l,r,count=0;
    cin>>l>>r;
    ll x=sqrt(l),y=sqrt(r),start=x,end=y,last=l-1;
    if(end-start<=3){
        for(ll z=start ; last!=r ; z++){
            ll just=min((z+1)*(z+1)-1,r);
            count+=(just/z-last/z);
            last=just;
        }
    }
    else{
        end=(start+1)*(start+1);
        start*=start;
        while(start<end){
            if(start>=l)count++;
            start+=x;
        }
        start=x+1;
        end=y*y;
        while(end<=r){
            count++;
            end+=y;
        }
        end=y;
        count+=(end-start)*3;
    }
    cout<<count<<'\n';
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
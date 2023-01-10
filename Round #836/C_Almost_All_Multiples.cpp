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

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t,n,x;
//     cin>>t;
//     while (t--) {
//         cin>>n>>x;
//         int k=n/x;
//         if (n%x!=0||(n>>16==x)) {
//             cout<<-1<<endl;
//             continue;
//         }
//         vector<int> v;
//         v.push_back(0);
//         v.push_back(x);
//         for (int i=2;i<n;i++) {
//             if(k==200){
//                 cout<<-1<<endl;
//                 continue;
//             }
//             v.push_back(i);
//         }
//         v.push_back(1);
//         for (int i=2;i<50&&i*i<=n/x;i++) {
//             while (n/x%i==0) {
//                 v[x]=x*i;
//                 x*=i;
//             }
//         }
//         if (x<n) {
//             v[x]=n;
//         }
//         for (int i=1;i<=n;i++) {
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//     }
// }


void solve(){
    int n,x;
    cin>>n>>x;
    if(n%x){
        cout<<"-1\n";
        return;
    }
    vector<int> v(n+1);
    v[1]=x;
    v[n]=1;
    int z=n;
    for(int i=n-1 ; i>1 ; i--){
        if(z%i==0 && i%x==0){
            v[i]=z;
            z=i;
        }
    }
    for(int i=1 ; i<=n ; i++){
        if(v[i])cout<<v[i]<<" ";
        else cout<<i<<" ";
    }
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
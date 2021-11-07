#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    ll n,x;
    cin>>n;
    ll cur=0;
    for(int i=0 ; i<n ; i++){
        cur++;
        cin>>x;
        if(x>cur)cur+=x-cur;
    }
    cout<<cur-n<<'\n';
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    int k=1;
    while(t--){
        solve();
    }
    return 0;
}    
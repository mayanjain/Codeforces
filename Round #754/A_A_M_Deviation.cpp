#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    a+=c;
    b*=2;
    if(abs(a-b)%3==0)cout<<0<<'\n';
    else cout<<1<<'\n';
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
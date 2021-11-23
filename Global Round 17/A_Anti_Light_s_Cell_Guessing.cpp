#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    int x,y;
    cin>>x>>y;
    if(x==1 && y==1)cout<<0<<"\n";
    else if(x==1 || y==1)cout<<1<<'\n';
    else cout<<2<<'\n';
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

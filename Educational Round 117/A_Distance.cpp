#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    int x,y;
    cin>>x>>y;
    if((x+y)%2)cout<<"-1 -1\n";
    else{
        if(x>=(x+y)/2)cout<<(x+y)/2<<" "<<0<<'\n';
        else cout<<0<<" "<<(x+y)/2<<'\n';
    }
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
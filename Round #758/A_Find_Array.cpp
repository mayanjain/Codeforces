#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    int k=3;
    while(n--){
        cout<<k<<" ";
        k+=2;
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

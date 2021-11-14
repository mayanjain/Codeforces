#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> b(n);
    for(auto& i:v)cin>>i;
    for(auto& i:b)cin>>i;
    sort(v.begin(),v.end());
    sort(b.begin(),b.end());
    int k=0;
    for(int i=0 ; i<n ; i++){
        if(b[i]==v[i] || b[i]==v[i]+1){
            k++;
        }
    }
    if(k==n)cout<<"YES\n";
    else cout<<"NO\n";
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

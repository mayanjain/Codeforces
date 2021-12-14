#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto& i:v)cin>>i;
    for(int i=1 ; i<n ; i++){
        if(v[i]==0 && v[i-1]==0){
            cout<<"-1\n";
            return;
        }
    }
    int ans=1;
    for(int i=0 ; i<n ; i++){
        if(v[i]==1)ans++;
        if(i>0 && v[i-1]==1 && v[i]==1)ans+=4;
    }
    cout<<ans<<'\n';
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

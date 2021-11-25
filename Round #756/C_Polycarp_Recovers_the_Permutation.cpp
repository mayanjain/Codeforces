#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto& i:v)cin>>i;
    if(v[0]!=n && v[n-1]!=n)cout<<"-1\n";
    else{
        if(v[0]==n){
            cout<<v[0]<<" ";
            for(int i=n-1 ; i>0 ; i--)cout<<v[i]<<" ";
            cout<<'\n';
        }
        else{
            for(int i=n-2 ; i>=0 ; i--)cout<<v[i]<<" ";
            cout<<v[n-1]<<'\n';
        }
    }
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

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
    if(n%2==0){
        cout<<"YES\n";
        return;
    }
    for(int i=1 ; i<n ; i++){
        if(v[i]<=v[i-1]){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
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
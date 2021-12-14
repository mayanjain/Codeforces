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
    int mx=0;
    for(auto& i:v){
        mx=max(mx,i);
    }
    int k=0,cur=0;
    for(int i=n-1 ; i>=0 ; i--){
        if(v[i]==mx){
            cout<<k<<"\n";
            return;
        }
        if(i==n-1)k++;
        else if(i<n-1 && v[i]>cur)k++;
        cur=max(cur,v[i]);
    }
    cout<<k<<'\n';
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

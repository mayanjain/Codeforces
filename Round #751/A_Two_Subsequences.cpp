#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    string s;
    cin>>s;
    char z='z';
    for(auto& i:s){
        z=min(z,i);
    }
    cout<<z<<" ";
    int k=1;
    for(auto& i:s){
        if(i==z && k){
            k--;
            continue;
        }
        cout<<i;
    }
    cout<<'\n';
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
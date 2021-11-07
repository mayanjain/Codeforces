#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    string s;
    for(auto& i:v)cin>>i;
    cin>>s;
    vector<ll> blue,red;
    for(int i=0 ; i<n; i++){
        if(s[i]=='B')blue.push_back(v[i]);
        else red.push_back(v[i]);
    }
    sort(blue.begin(),blue.end());
    sort(red.begin(),red.end());
    ll k=1;
    for(int i=0 ; i<blue.size() ; i++){
        if(blue[i]<k){
            cout<<"NO\n";
            return;
        }
        k++;
    }
    for(int i=0 ; i<red.size() ; i++){
        if(red[i]>k){
            cout<<"NO\n";
            return;
        }
        k++;
    }
    cout<<"YES\n";
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
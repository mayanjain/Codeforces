#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<string> v;
    v.push_back("aa");
    v.push_back("aca");
    v.push_back("aba");
    v.push_back("acba");
    v.push_back("abca");
    v.push_back("abbacca");
    v.push_back("accabba");

    int ans=INT_MAX;
    for(auto& i:v){
        if(s.find(i)!=string::npos){
            ans=min(int(i.size()),ans);
        }
    }
    if(ans==INT_MAX){
        cout<<"-1\n";
        return;
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
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    string abc,s;
    cin>>abc>>s;
    map<char,int> mp;
    int j=0;
    for(auto& i:abc){
        mp[i]=j++;
    }
    int ans=0;
    for(int i=1 ; i<s.size() ; i++){
        ans+=abs(mp[s[i-1]]-mp[s[i]]);
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
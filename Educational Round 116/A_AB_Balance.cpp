#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int ab=0,ba=0;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='a' && s[i+1]=='b')ab++;
        if(s[i]=='b' && s[i+1]=='a')ba++;
    }
    if(ab==ba)cout<<s<<'\n';
    else if(ab>ba){
        if(s[0]=='a'){
            s[0]='b';
            cout<<s<<'\n';
        }
        else if(s[n-1]=='b'){
            s[n-1]='a';
            cout<<s<<'\n';
        }
    }
    else{
        if(s[0]=='b'){
            s[0]='a';
            cout<<s<<'\n';
        }
        else if(s[n-1]=='a'){
            s[n-1]='b';
            cout<<s<<'\n';
        }
    }

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
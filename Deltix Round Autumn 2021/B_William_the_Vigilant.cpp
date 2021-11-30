#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int ans=0;
    for(int i=2 ; i<n ; i++){
        if(s[i-2]=='a' && s[i-1]=='b' && s[i]=='c')ans++;
    }
    int pos;
    char c;
    while(q--){
        cin>>pos>>c;
        pos--;
        if(c=='c'){
            if(s[pos]=='b'){
                if(pos>0 && pos<n-1 && s[pos-1]=='a' && s[pos+1]=='c')ans--;
            }
            else if(s[pos]=='a'){
                if(pos<n-2 && s[pos+1]=='b' && s[pos+2]=='c')ans--;
            }
            else{
                cout<<ans<<'\n';
                continue;
            }
            s[pos]=c;
            if(pos<n && pos>1 && s[pos-1]=='b' && s[pos-2]=='a')ans++;

        }
        else if(c=='b'){
            if(s[pos]=='c'){
                if(pos>1 && pos<n && s[pos-1]=='b' && s[pos-2]=='a')ans--;
            }
            else if(s[pos]=='a'){
                if(pos<n-2 && s[pos+1]=='b' && s[pos+2]=='c')ans--;
            }
            else{
                cout<<ans<<'\n';
                continue;
            }
            s[pos]=c;
            if(pos>0 && pos<n-1 && s[pos-1]=='a' && s[pos+1]=='c')ans++;

        }
        else if(c=='a'){
            if(s[pos]=='b'){
                if(pos>0 && pos<n-1 && s[pos-1]=='a' && s[pos+1]=='c')ans--;
            }
            else if(s[pos]=='c'){
                if(pos<n && pos>1 && s[pos-1]=='b' && s[pos-2]=='a')ans--;
            }
            else{
                cout<<ans<<'\n';
                continue;
            }
            s[pos]=c;
            if(pos<n-2 && s[pos+1]=='b' && s[pos+2]=='c')ans++;
        }
        cout<<ans<<'\n';
    }
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}    
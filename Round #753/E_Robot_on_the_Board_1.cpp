#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int hz=0,vt=0;
    int mxhz=0,mnhz=0,mxvt=0,mnvt=0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='R'){
            hz++;
            mxhz=max(mxhz,hz);
            mnhz=min(mnhz,hz);
            if(mxhz-mnhz>=m){
                mxhz--;
                break;
            }
        }
        if(s[i]=='L'){
            hz--;
            mxhz=max(mxhz,hz);
            mnhz=min(mnhz,hz);
            if(mxhz-mnhz>=m){
                mnhz++;
                break;
            }
        }
        if(s[i]=='U'){
            vt--;
            mxvt=max(mxvt,vt);
            mnvt=min(mnvt,vt);
            if(mxvt-mnvt>=n){
                mnvt++;
                break;
            }
        }
        if(s[i]=='D'){
            vt++;
            mxvt=max(mxvt,vt);
            mnvt=min(mnvt,vt);
            if(mxvt-mnvt>=n){
                mxvt--;
                break;
            }
        }
        // cout<<hz<<" "<<vt<<"  ";
    }
    if(mxvt!=0){
        // cout<<mxvt<<" "<<mnvt<<" ";
        cout<<n-mxvt<<" ";
    }
    else cout<<1-mnvt<<" ";
    if(mxhz!=0){
        cout<<m-mxhz<<"\n";
    }
    else cout<<1-mnhz<<"\n";
    
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
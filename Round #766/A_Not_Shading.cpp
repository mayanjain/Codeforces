#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void solve(){
    int n,m,r,c;
    cin>>n>>m>>r>>c;
    vector<vector<char>> v(n,vector<char>(m));
    int tblack=0;
    for(int i=0 ; i<n ; i++)for(int j=0 ; j<m ; j++){
        cin>>v[i][j];
        if(v[i][j]=='B')tblack++;
    }
    r--;c--;
    if(v[r][c]=='B'){
        cout<<"0\n";
        return;
    }
    int black=0;
    for(int i=0 ; i<m ; i++){
        if(v[r][i]=='B')black++;
    }
    for(int i=0 ; i<n ; i++){
        if(v[i][c]=='B')black++;
    }
    if(black){
        cout<<"1\n";
        return;
    }
    if(tblack){
        cout<<"2\n";
    }
    else cout<<"-1\n";
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
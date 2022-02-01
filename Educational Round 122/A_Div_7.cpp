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
    int n;
    cin>>n;
    string s=to_string(n);
    int c=n%7;
    if(c==0)cout<<n<<'\n';
    else{
        string k=to_string(n-c);
        string f=to_string(n+7-c);
        int z1=5,z2=5;
        if(k.size()==s.size()){
            z1=0;
            for(int i=0 ; i<k.size() ; i++){
                if(k[i]!=s[i])z1++;
            }
        }
        if(f.size()==s.size()){
            z2=0;
            for(int i=0 ; i<f.size() ; i++){
                if(f[i]!=s[i])z2++;
            }
        }
        if(z1>z2)swap(k,f);
        cout<<k<<'\n';
        // cout<<n-c<<"\n";
    }
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
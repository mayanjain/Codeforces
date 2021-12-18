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
    string s,t;
    cin>>s>>t;
    sort(s.begin(),s.end());
    if(t!="abc"){
        cout<<s<<'\n';
    }
    else{
        int b=0,c=0,a=0;
        for(auto& i:s){
            if(i=='c')c++;
            if(i=='a')a++;
            if(i=='b')b++;
        }
        if(a && b && c){
            int k=0;
            for(int i=0 ; i<s.size() ; i++){
                if(s[i]=='b' && c){
                    s[i]='c';
                    c--;
                    k++;
                }
                if(c==0)break;
            }
            for(int i=s.size()-1 ; i>=0 ; i--){
                if(s[i]=='c' && k){
                    s[i]='b';
                    k--;
                }
                if(k==0)break;
            }
        }
        cout<<s<<"\n";
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
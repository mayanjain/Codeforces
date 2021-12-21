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
    string a,s;
    cin>>a>>s;
    string b="";
    int dif=s.size()-a.size(),cnt=0;
    reverse(a.begin(),a.end());
    while(a.size()<s.size())a+='0';
    reverse(a.begin(),a.end());
    int j=a.size()-1;
    for(int i=s.size()-1 ; i>=0 ; i--,j--){
        string k="";
        if(s[i]<a[j]){
            cnt++;
            if(i==0 || cnt>dif){
                cout<<"-1\n";
                return;
            }
            k+=s[i-1];
            k+=s[i];
            i--;
            k=to_string(stoi(k)-(a[j]-'0'));
            if(k.size()>1){
                cout<<"-1\n";
                return;
            }
            b+=k;
        }
        else b+=to_string(s[i]-a[j]);
        // cout<<b<<" ";
    }
    for(int i=0 ; i<=j ; i++){
        if(a[j]!='0'){
            cout<<"-1\n";
            return;
        }
    }
    while (b.back()=='0')
    {
        b.pop_back();
    }
    reverse(b.begin(),b.end());
    cout<<b<<'\n';
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
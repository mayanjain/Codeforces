#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

struct tcc{
    ll st=INT_MAX,end=INT_MIN,price=LONG_LONG_MAX;
};

void solve(){
    ll n,x,y,z;
    cin>>n;
    tcc a1,a2,sp;
    vector<tcc> v(n);
    ll op=0;
    for(int i=0 ; i<n ; i++){
        cin>>x>>y>>z;
        v[i].st=x,v[i].end=y,v[i].price=z;
        if(x<a1.st){
            a1=v[i];
        }
        else if(x==a1.st && z<a1.price){
            a1=v[i];
        }
        if(y>a2.end){
            a2=v[i];
        }
        else if(y==a2.end && z<a2.price){
            a2=v[i];
        }
        if(x==a1.st && y==a2.end){
            if(sp.st==x && sp.end==y){
                if(z<sp.price)sp.price=z;
            }
            else sp=v[i];
        }
        op=LONG_LONG_MAX;
        if(sp.st==a1.st && sp.end==a2.end)op=sp.price;
        op=min(a1.price+a2.price,op);
        cout<<op<<'\n';
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
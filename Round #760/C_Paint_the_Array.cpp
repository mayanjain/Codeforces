#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
#define mod 1000000007
#define mod1 998244353

ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void solve(){
    ll n;
    cin>>n;
    vector<ll> a;
    vector<ll> b;
    ll x;
    ll mna=0,mnb=0;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        if(i%2){
            a.push_back(x);
            mna=gcd(x,mna);
        }
        else{
            b.push_back(x);
            mnb=gcd(mnb,x);
        } 
    }
    int ak=0,bk=0;
    for(int i=0 ; i<b.size() ; i++){
        if(b[i]%mna==0){
            ak++;
            break;
        }
    }
    if(ak==0){
        cout<<mna<<'\n';
        return;
    }
    for(int i=0 ; i<a.size() ; i++){
        if(a[i]%mnb==0){
            bk++;
            break;
        }
    }
    if(bk==0){
        cout<<mnb<<'\n';
        return;
    }
    cout<<"0\n";
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
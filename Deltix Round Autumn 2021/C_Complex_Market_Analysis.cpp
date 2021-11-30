#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

vector<bool> primes(1e6+5,true);

void calprime(){
    primes[1]=false;
    for (int p=2 ; p*p<primes.size() ; p++)
    {
        if (primes[p])
        {
            for (int i=p*p; i<primes.size(); i+=p)primes[i] = false;
        }
    }

}

void solve(){
    ll n,e;
    cin>>n>>e;
    vector<ll> v(n);
    for(auto& i:v)cin>>i;
    vector<ll> before(n);
    vector<ll> after(n);
    for(ll i=0 ; i<e ; i++){
        int cur=0;
        for(ll j=i ; j<n ; j+=e){
            before[j]=cur;
            if(v[j]==1)cur++;
            else cur=0;
        }
    }
    for(ll i=n-1 ; i>=n-e ; i--){
        int cur=0;
        for(ll j=i ; j>=0 ; j-=e){
            after[j]=cur;
            if(v[j]==1)cur++;
            else cur=0;
        }
    }
    ll ans=0;
    for(ll i=0 ; i<n ; i++){
        if(primes[v[i]]){
            // cout<<before[i]<<" "<<after[i]<<"  ";
            ans+=(before[i])*(after[i]);
            ans+=before[i]+after[i];
        }
    }
    cout<<ans<<'\n';
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    calprime();
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}    
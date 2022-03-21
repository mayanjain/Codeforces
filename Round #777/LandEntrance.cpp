#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

vector<string> num{"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

void solve(){
    ll n;
    cin>>n;
    vector<string> v(n);
    for(auto& i:v)cin>>i;
    vector<string> emotions(n);
    for(auto& i:emotions)cin>>i;
    ll score=0;
    vector<ll> quantity;
    for(int i=0 ; i<n ; i++){
        quantity.push_back(stoi(v[i]));
    }
    for(int i=0 ; i<n ; i++){
        if(emotions[i][0]=='H')score+=quantity[i]*10;
        if(emotions[i][0]=='S')score+=quantity[i]*5;
        if(emotions[i][0]=='N'){
            if(emotions[i][1]=='o')score+=quantity[i];
            if(emotions[i][1]=='e')score+=quantity[i]*2;
        }
    }
    ll score2=0;
    for(int i=0 ; i<n ; i++){
        ll c=0;
        for(auto& j:v[i]){
            if(j=='a' || j=='e' || j=='i' || j=='o' || j=='u' || j=='E' || j=='A'){
                c++;
            }
        }
        score2+=c*quantity[i];
    }
    if(score2<score)swap(score2,score);
    score2/=score;
    if(score2<2){
        cout<<"No "<<num[score2]<<'\n';
        return;
    }
    for(int i=2 ; i<score2 ; i++){
        if(score2%i==0){
            cout<<"No "<<num[score2]<<'\n';
            return;
        }
    }
    cout<<"Yes "<<num[score2]<<'\n';
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
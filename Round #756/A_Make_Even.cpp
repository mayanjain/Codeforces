#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;
    string s=to_string(n);
    int rem=n%10;
    int first=s[0]-'0';
    if(rem%2==0)cout<<"0\n";
    else if(first%2==0)cout<<"1\n";
    else{
        for(auto& i:s){
            int x=i-'0';
            if(x%2==0){
                cout<<"2\n";
                return;
            }
        }
        cout<<"-1\n";
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

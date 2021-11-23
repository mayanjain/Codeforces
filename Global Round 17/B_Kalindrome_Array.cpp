#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

bool sk(int c,vector<int>& v){
    int low=0,high=v.size()-1;
    while(low<high){
        if(v[low]==v[high]){
            low++;high--;
        }
        else{
            if(v[low]==c)low++;
            else if(v[high]==c)high--;
            else return false;
        }
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto& i:v)cin>>i;
    int low=0,high=n-1,f=0;
    while(low<high){
        if(v[low]==v[high]){
            low++;
            high--;
        }
        else{
            break;
        }
    }
    if(sk(v[low],v)||sk(v[high],v))cout<<"YES\n";
    else cout<<"NO\n";
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

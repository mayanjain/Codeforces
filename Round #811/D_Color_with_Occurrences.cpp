#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define ld long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_multiset tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
ll gcd(ll a,ll b){if(b==0)return a; return gcd(b,a%b);}
ll lcm(ll a,ll b){return (a/gcd(a,b))*b;}

void solve(){
    string s;
    cin>>s;
    int n,t=s.size();
    cin>>n;
    vector<string> v(n);
    set<string> st;
    map<string,int> mp; 
    for(int i=0 ; i<n ; i++){
        cin>>v[i];
        st.insert(v[i]);
        mp[v[i]]=i+1;
    }
    vector<pair<ll,ll>> ans;
    int last=0;
    while(last!=t){
        int sr=0,id=0,mx=0;
        for(int i=last ; i>=max(0,last-11) ; i--){
            string cur="";
            for(int j=i ; j<min(t,i+11) ; j++){
                cur+=s[j];
                if(st.count(cur)){
                    if(mx<j-last+1){
                        mx=j-last+1;
                        sr=i+1,id=mp[cur];
                    }
                }
            }
        }
        if(mx==0){
            cout<<"-1\n";
            return;
        }
        ans.push_back({id,sr});
        last+=mx;
    }
    cout<<ans.size()<<'\n';
    for(auto& i:ans)cout<<i.first<<" "<<i.second<<'\n';
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
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> ans;
    unordered_set<int> st;
    ans.push_back(a);
    st.insert(a);
    for(int i=b+1 ; i<=n ; i++){
        if(st.count(i))continue;
        ans.push_back(i);
        st.insert(i);
    }
    for(int i=b-1 ; i>a ; i--){
        if(st.count(i))continue;
        ans.push_back(i);
        st.insert(i);
    }
    for(int i=1 ; i<a ; i++){
        if(st.count(i))continue;
        ans.push_back(i);
        st.insert(i);
    }
    if(!st.count(b)){
        ans.push_back(b);
    }
    int mn=INT_MAX,mx=0;
    for(int i=0 ; i<n/2 ; i++){
        mn=min(mn,ans[i]);
    }
    for(int i=n/2 ; i<n ; i++){
        mx=max(mx,ans[i]);
    }
    if(mn!=a || mx!=b)cout<<-1<<'\n';
    else{
        for(auto& i:ans)cout<<i<<" ";
        cout<<'\n';
    }
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    int k=1;
    while(t--){
        solve();
    }
    return 0;
}    
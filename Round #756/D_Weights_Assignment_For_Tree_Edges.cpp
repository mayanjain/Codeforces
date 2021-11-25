#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    vector<int> parent(n+1);
    vector<int> pos(n+1);
    for(int i=1 ; i<=n ; i++)cin>>parent[i];
    for(int i=1 ; i<=n ; i++){
        cin>>pos[i];
    }
    int root=0;
    for(int i=1 ; i<=n ; i++){
        if(parent[i]==i){
            root=i;
            break;
        }
    }
    if(!root){
        cout<<"-1\n";
        return;
    }
    vector<int> fdist(n+1);
    for(int i=1 ; i<=n ; i++){
        fdist[pos[i]]=i-1;
    }
    if(fdist[root]!=0){
        cout<<"-1\n";
        return;
    }
    for(int i=1 ; i<=n ; i++){
        if(root==i)continue;
        if(fdist[parent[i]]>=fdist[i]){
            cout<<"-1\n";
            return;
        }
    }
    for(int i=1 ; i<=n ; i++){
        cout<<fdist[i]-fdist[parent[i]]<<" ";
    }
    cout<<'\n';
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

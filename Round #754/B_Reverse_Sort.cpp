#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld= long double;
const int mod = 1e9 + 7;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string p=s;
    sort(p.begin(),p.end());
    if(p==s){
        cout<<0<<'\n';
        return;
    }
    int last=n;
    vector<int> cur;
    vector<int> vc;
    for(int i=0 ; i<n ; i++){
        if(s[i]=='1'){
            int fk=last;
            for(int j=last-1; j>i ; j--){
                if(s[j]=='0'){
                    fk=j;
                    vc.push_back(j+1);
                    break;
                }
            }
            if(fk!=last){
                cur.push_back(i+1);
                last=fk;
            }
            else break;
        }
    }
    cout<<1<<'\n';
    cout<<cur.size()+vc.size()<<" ";
    for(int i=0 ; i<cur.size() ; i++)cout<<cur[i]<<" ";
    for(int i=int(vc.size())-1 ; i>=0 ; i--)cout<<vc[i]<<" ";
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
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
const int mod = 1e9 + 7;

void solve(){
    ll s1,p1,s2,p2;
    cin>>s1>>p1>>s2>>p2;
    string k1=to_string(s1);
    string k2=to_string(s2);
    if(k1.size()+p1>k2.size()+p2)cout<<">\n";
    else if(k1.size()+p1<k2.size()+p2)cout<<"<\n";
    else{
        int swa=0;
        if(k1.size()<k2.size()){
            swap(k1,k2);
            swa=1;
        }
        p1=abs(p1-p2);
        while(p1--){
            k2+='0';
        }
        for(int i=0 ; i<k1.size() ; i++){
            if(k1[i]<k2[i]){
                if(swa)cout<<">\n";
                else cout<<"<\n";
                return;
            }
            if(k2[i]<k1[i]){
                if(swa)cout<<"<\n";
                else cout<<">\n";
                return;
            }
        }
        cout<<"=\n";
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
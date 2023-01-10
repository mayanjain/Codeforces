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

int minVal(int x, int y) { return (x < y)? x: y; } 
  
// A utility function to get the 
// middle index from corner indexes. 
int getMid(int s, int e) { return s + (e -s)/2; } 
  
/* A recursive function to get the
minimum value in a given range 
of array indexes. The following 
are parameters for this function. 
  
    st --> Pointer to segment tree 
    index --> Index of current node in the 
           segment tree. Initially 0 is 
           passed as root is always at index 0 
    ss & se --> Starting and ending indexes 
                of the segment represented 
                by current node, i.e., st[index] 
    qs & qe --> Starting and ending indexes of query range */
int RMQUtil(int *st, int ss, int se, int qs, int qe, int index) 
{ 
    // If segment of this node is a part 
    // of given range, then return 
    // the min of the segment 
    if (qs <= ss && qe >= se) 
        return st[index]; 
  
    // If segment of this node
    // is outside the given range 
    if (se < qs || ss > qe) 
        return INT_MAX; 
  
    // If a part of this segment
    // overlaps with the given range 
    int mid = getMid(ss, se); 
    return minVal(RMQUtil(st, ss, mid, qs, qe, 2*index+1), 
                RMQUtil(st, mid+1, se, qs, qe, 2*index+2)); 
} 
  
// Return minimum of elements in range
// from index qs (query start) to 
// qe (query end). It mainly uses RMQUtil() 
int RMQ(int *st, int n, int qs, int qe) 
{ 
    // Check for erroneous input values 
    if (qs < 0 || qe > n-1 || qs > qe) 
    { 
        cout<<"Invalid Input"; 
        return -1; 
    } 
  
    return RMQUtil(st, 0, n-1, qs, qe, 0); 
} 
  
// A recursive function that constructs
// Segment Tree for array[ss..se]. 
// si is index of current node in segment tree st 
int constructSTUtil(int arr[], int ss, int se,
                                int *st, int si) 
{ 
    // If there is one element in array,
    // store it in current node of 
    // segment tree and return 
    if (ss == se) 
    { 
        st[si] = arr[ss]; 
        return arr[ss]; 
    } 
  
    // If there are more than one elements, 
    // then recur for left and right subtrees 
    // and store the minimum of two values in this node 
    int mid = getMid(ss, se); 
    st[si] = minVal(constructSTUtil(arr, ss, mid, st, si*2+1), 
                    constructSTUtil(arr, mid+1, se, st, si*2+2)); 
    return st[si]; 
} 
  
/* Function to construct segment tree 
from given array. This function allocates
memory for segment tree and calls constructSTUtil() to 
fill the allocated memory */
int *constructST(int arr[], int n) 
{ 
    // Allocate memory for segment tree 
  
    //Height of segment tree 
    int x = (int)(ceil(log2(n))); 
  
    // Maximum size of segment tree 
    int max_size = 2*(int)pow(2, x) - 1; 
  
    int *st = new int[max_size]; 
  
    // Fill the allocated memory st 
    constructSTUtil(arr, 0, n-1, st, 0); 
  
    // Return the constructed segment tree 
    return st; 
} 

bool check(ll l,ll n,ll m,vector<int*> seg){
    for(int col=l-1 ; col<m ; col++){
        int cur=0;
        for(int row=0 ; row<n ; row++){
            int mn=RMQ(seg[row],m,col-l+1,col);
            if(mn>=l)cur++;
            else cur=0;
            if(cur==l)return true;
        }
    }
    return false;
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n,vector<ll>(m));
    for(auto& i:v){
        for(auto& j:i){
            cin>>j;
        }
    }
    vector<int*> seg(n);
    for(int i=0 ; i<n ; i++){
        int arr[m];
        for(int j=0 ; j<m ; j++)arr[j]=v[i][j];
        seg[i]=constructST(arr,m);
    }
    ll low=1,high=min(n,m);
    while(high-low>1){
        ll mid=(low+high)/2;
        if(check(mid,n,m,seg))low=mid;
        else high=mid-1;
    }
    if(check(high,n,m,seg))cout<<high<<'\n';
    else cout<<low<<'\n';
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
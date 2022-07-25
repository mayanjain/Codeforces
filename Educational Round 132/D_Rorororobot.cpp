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

struct node
{
   int minimum;
   int maximum;
};
  
// A utility function to get the middle index from corner indexes.
int getMid(int s, int e) {  return s + (e -s)/2;  }
  
/*  A recursive function to get the minimum and maximum value in
     a given range of array indexes. The following are parameters
     for this function.
  
    st    --> Pointer to segment tree
    index --> Index of current node in the segment tree. Initially
              0 is passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment
                  represented  by current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
struct node MaxMinUntill(struct node *st, int ss, int se, int qs,
                         int qe, int index)
{
    // If segment of this node is a part of given range, then return
    //  the minimum and maximum node of the segment
    struct node tmp,left,right;
    if (qs <= ss && qe >= se)
        return st[index];
  
    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
    {
       tmp.minimum = INT_MAX;
       tmp.maximum = INT_MIN;
       return tmp;
     }
  
    // If a part of this segment overlaps with the given range
    int mid = getMid(ss, se);
    left = MaxMinUntill(st, ss, mid, qs, qe, 2*index+1);
    right = MaxMinUntill(st, mid+1, se, qs, qe, 2*index+2);
    tmp.minimum = min(left.minimum, right.minimum);
    tmp.maximum = max(left.maximum, right.maximum);
    return tmp;
}
  
// Return minimum and maximum of elements in range from index
// qs (query start) to qe (query end).  It mainly uses
// MaxMinUtill()
struct node MaxMin(struct node *st, int n, int qs, int qe)
{
    struct node tmp;
  
    // Check for erroneous input values
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        tmp.minimum = INT_MIN;
        tmp.minimum = INT_MAX;
        return tmp;
    }
  
    return MaxMinUntill(st, 0, n-1, qs, qe, 0);
}
  
// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
void constructSTUtil(int arr[], int ss, int se, struct node *st,
                     int si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si].minimum = arr[ss];
        st[si].maximum = arr[ss];
        return ;
    }
  
    // If there are more than one elements, then recur for left and
    // right subtrees and store the minimum and maximum of two values
    // in this node
    int mid = getMid(ss, se);
    constructSTUtil(arr, ss, mid, st, si*2+1);
    constructSTUtil(arr, mid+1, se, st, si*2+2);
  
    st[si].minimum = min(st[si*2+1].minimum, st[si*2+2].minimum);
    st[si].maximum = max(st[si*2+1].maximum, st[si*2+2].maximum);
}
  
/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
struct node *constructST(int arr[], int n)
{
    // Allocate memory for segment tree
  
    // Height of segment tree
    int x = (int)(ceil(log2(n)));
  
    // Maximum size of segment tree
    int max_size = 2*(int)pow(2, x) - 1;
  
    struct node *st = new struct node[max_size];
  
    // Fill the allocated memory st
    constructSTUtil(arr, 0, n-1, st, 0);
  
    // Return the constructed segment tree
    return st;
}

void solve(){
    ll n,m,q;
    cin>>n>>m;
    int v[m];
    for(int i=0; i<m ; i++){
        cin>>v[i];
    }
    node* st=constructST(v,m);
    cin>>q;
    while(q--){
        ll stx,sty,endx,endy,k;
        cin>>stx>>sty>>endx>>endy>>k;
        if(abs(stx-endx)%k || abs(sty-endy)%k){
            cout<<"NO\n";
            continue;
        }
        auto res=MaxMin(st,m,min(sty-1,endy-1),max(sty-1,endy-1));
        ll mx=(n-stx)%k;
        mx=n-mx;
        if(mx>res.maximum)cout<<"YES\n";
        else cout<<"NO\n";
    }
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
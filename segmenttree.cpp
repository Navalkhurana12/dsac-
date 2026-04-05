#include<bits/stdc++.h>
using namespace std;
vector<int>segment;
int size;
void build_tree(int i,int lo,int hi,vector<int>arr){
  if(lo==hi){
    segment[i]=arr[lo];
    return ;
  }
  int mid=lo+(hi-lo)/2;
  build_tree(2*i+1,lo,mid,arr);
  build_tree(2*i+2,mid+1,hi,arr);
  segment[i]=segment[2*i+1]+segment[2*i+2];
}
void update (int i,int lo,int hi,int p,int val,vector<int>arr){
  if(lo==hi){
    segment[i]=val;
    return ;
  }
  int mid=lo+(hi-lo)/2;
  if(mid<=p) update(2*i+1,lo,mid,p,val,arr);
  else update(2*i+2,mid+1,hi,p,val,arr);
  segment[i]=segment[2*i+1]+segment[2*i+2];
}
 int solve(int i, int lo, int hi, int l, int r, vector<int> &seg) {

        // No overlap
        if (hi < l || lo > r) return 0;

        // Total overlap
        if (lo >= l && hi <= r) return seg[i];

        // Partial overlap
        int mid = (lo + hi) / 2;

        return solve(2*i+1, lo, mid, l, r, seg)
             + solve(2*i+2, mid+1, hi, l, r, seg);
    }
int main(){
  cout<<"enter the size of array ";
  int n;
  cin>>n;
  size=n;
  vector<int>arr(n);
  cout<<"enter the element in array ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  segment.resize(4*n);
  build_tree(0,0,n-1,arr);
  
}
//lazy propagation means update on range query 
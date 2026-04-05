#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
  cin>>n>>k;
  vector<int>arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];
  int minn=INT_MAX;
  int e=0,o=0;
  for(int i=0;i<n;i++){
    if(arr[i]%2==0)e++;
    else o++;
    int l=arr[i]%k;
    if(l==0)minn=0;
    minn=min(minn,k-l);
  }
  int l=INT_MAX;
  if(k==4){
    if(e>=2)l=0;
    else if(e==1)l=1;
    else l=2;
  }
  minn=min(l,minn);
  cout<<minn<<endl;
  }
}

#include<bits/stdc++.h>
using namespace std;
bool solve(long long  maxx,vector<long long>&arr,long long x){
      int n=arr.size();
      long long count=0;
      for(long long i:arr){
        if(i<maxx)count+=i-maxx;
        if(count>x)return false;
      }
      return true;
}
int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  long long x;
  cin>>x;
  vector<long long >arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int maxx=*max_element(arr.begin(),arr.end());
  long long lo=1;
  long long hi=maxx+x;
  long long ans=lo;
  while(lo<=hi){
    long long  mid=lo+(hi-lo)/2;
    if(solve(mid,arr,x)){
     ans=mid;
     lo=mid+1;
    }
    else hi=mid-1;
  }
  cout<<ans<<endl;
  }

}
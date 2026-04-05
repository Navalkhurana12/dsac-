#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int a,b,n;
    cin>>a>>b>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int c=1;
    int i=0;
    long long count=b-1;
    while(i<n){
      int e=min(c+arr[i],a);
      if(i<n-1)count+=e-1;
      else count+=e;
      c=1;
      i++;
    }
   cout<<count;
   cout<<endl;
  }
}
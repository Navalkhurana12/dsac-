#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    int s=1;
    int c=1;
    for(int i=1;i<n;i++){
      if(arr[i]==arr[i-1])c++;
      else c=1;
      s=max(s,c);
    }
    long long same=(int)s;
    long long op=0;
    while(same<n){
      op=op+1;
      int k=n-same;
      if(k>=same){
        op+=same;
      }
      else op+=n-same;
      same=same+same;
    }
    cout<<op<<endl;
  }
}
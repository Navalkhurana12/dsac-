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
    int j=0;
    vector<int>ans(n);
    while(arr[j]==j+1 && j<n){
      ans[j]=arr[j];
      j++;
    }
    int ele;
    if(j<n){
     ele=j+n+1;
    }
    while(j<n){
      ans[j]=ele-arr[j];
      j++;
    }
    for(int i=0;i<n;i++){
      cout<<ans[i]<<" ";
    }
    cout<<endl;
  }
}
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
    if(is_sorted(arr.begin(),arr.end())==false)cout<<0;
    else {
      int minn=INT_MAX;
      for(int i=1;i<n;i++){
        minn=min(minn,arr[i]-arr[i-1]);
      }
      int ele=minn/2;
      ele=ele+1;
      cout<<ele;
    }
    cout<<endl;
  }
}
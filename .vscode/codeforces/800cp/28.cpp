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
    int sum=arr[0];
    bool ans=true;
    for(int i=1;i<n;i++){
      if(arr[i]==sum){
        ans=false;
        break;
      }
      sum+=arr[i];
    }
    if(ans==true){
      cout<<"YES"<<endl;
      for(int i:arr)cout<<i<<" ";
    }
    else{
      vector<int>c=arr;
      sort(arr.begin(),arr.end());
      int i=0,j=n-1;
      if(arr[i]==arr[j])cout<<"NO";
      else{
         cout<<"YES"<<endl;
        while(i<j){
          cout<<arr[j]<<" ";
          cout<<arr[i]<<" ";
          i++;
          j--;
        }
        if(i==j)cout<<arr[i];
      }
    }
    cout<<endl;
  }
}
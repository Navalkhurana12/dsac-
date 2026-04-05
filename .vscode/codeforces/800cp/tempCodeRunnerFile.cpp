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
    int sum=0;
    bool ans=true;
    for(int i=0;i<n;i++){
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
      int ele=arr[0];
      int i=1;
      while(i<n&&ele==arr[i])i++;
      if(i==n)cout<<"NO";
      else{
        int temp=arr[0];
        arr[0]=arr[n-1];
        arr[n-1]=temp;
        cout<<"YES"<<endl;
        i--;
        int k=i;
        while(k<n)cout<<arr[k++]<<" ";
        for(int j=0;j<i;j++)cout<<arr[j]<<" ";
      }
    }
    cout<<endl;
  }
}
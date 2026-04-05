#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  vector<long long>arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];
  
  long long max_ele=*max_element(arr.begin(),arr.end());
  long long ans=max_ele;
  int c=0;
  for(int i=0;i<n;i++){
    
      ans= min (ans,(max_ele&arr[i]));
    
  }
  cout<<ans;
  cout<<endl;
}
}
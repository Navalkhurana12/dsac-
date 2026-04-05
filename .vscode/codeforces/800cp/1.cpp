#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  int n,k;
  while(t--){
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    if(k>1)cout<<"yes";
    else{
      if(is_sorted(arr.begin(),arr.end()))cout<<"yes";
      else cout<<"no";
    }
    cout<<endl;
  }

}
// https://www.geeksforgeeks.org/node-js/nodejs/
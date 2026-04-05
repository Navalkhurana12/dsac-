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
    int xr=0;
    for(int i=0;i<n;i++)xr=xr^arr[i];
    if(n%2!=0)cout<<xr;
    else{
      if(xr==0)cout<<0;
      else cout<<-1;
    }
    cout<<endl;
  }
}
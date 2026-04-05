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
    int maxx=0;
    for(int i=1;i<n;i++){
      maxx=max(maxx,arr[i]-arr[0]);
    }
    for(int i=0;i<n-1;i++){
      maxx=max(maxx,arr[n-1]-arr[i]);
    }
    for(int i=n-1;i>=1;i--){
      maxx=max(maxx,arr[i-1]-arr[i]);
    }
    cout<<maxx;
    cout<<endl;
  }
}
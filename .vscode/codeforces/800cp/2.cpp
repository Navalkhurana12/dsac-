#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int maxx=arr[0];
    for(int i=1;i<n;i++){
      maxx=max(maxx,arr[i]-arr[i-1]);
    }
    maxx=max(maxx,2*(x-arr[n-1]));
    cout<<maxx;
    cout<<endl;
  }
  return 0;
}
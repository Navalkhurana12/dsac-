#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    int c=1;
    int maxx=1;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]<=k)c++;
        else c=1;
        maxx=max(maxx,c);
    }
    cout<<n-maxx;
    cout<<endl;
  }
}
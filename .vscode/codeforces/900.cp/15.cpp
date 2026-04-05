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
    int count=0;
    bool ans=false;
    for(int i=n-2;i>=0;i--){
      while(arr[i]>=arr[i+1]){
        if(arr[i+1]==0){
          cout<<-1;
          ans=true;
          break;
        }
        arr[i]=arr[i]/2;
        count++;
      }
      if(ans==true)break;
    }
    if(ans==false)cout<<count;
    cout<<endl;
  }
}
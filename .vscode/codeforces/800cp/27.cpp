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
    int t=0;
    for(int i=0;i<n;i++){
      if(arr[i]==2)t++;
    }
    if(t==0)cout<<1;
    else if(t%2!=0)cout<<-1;
    else {
      int c=0;
      t=t/2;
      for(int i=0;i<n;i++){
        if(t==0){
          cout<<i;
          break;
        }
        else if(arr[i]==2)t--;
      }
    }
   cout<<endl;
  }
}
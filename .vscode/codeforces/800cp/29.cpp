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
    if(n==1)cout<<0;
    else{
      int op=0;
      for(int i=1;i<n;i++){
        if((arr[i-1]%2==0&&arr[i]%2==0)||(arr[i]%2!=0&&arr[i-1]%2!=0)){
          arr[i]=arr[i-1]*arr[i];
          op++;
        }
      }
      cout<<op;
    }
    cout<<endl;
  }
}
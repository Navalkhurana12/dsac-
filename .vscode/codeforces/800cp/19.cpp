#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n1;
    cin>>n1;
    vector<int>arr(n1);
    for(int i=0;i<n1;i++)cin>>arr[i];
    int p=0,n=0;
    for(int i=0;i<n1;i++){
      if(arr[i]==1)p++;
      else n++;
    }
    int op=0;
    if(n%2!=0){
      p++;
      n--;
      op++;
    }
    if(n>p){
     int d=((n-p)+1)/2;
     n-=d;
     p+=d;
     op+=d;
     if(n%2!=0){
        op++;
     }
     }
     cout<<op;
  cout<<endl;
  }
  
}

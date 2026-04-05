#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int count=0;
    if((n/10)==0)cout<<n;
    else{
      while(n){
      if((n/10)==0)count+=n;
      else{
        count+=9;
      }
      n=n/10;
      }
      cout<<count;
    }
    cout<<endl;
  }
}
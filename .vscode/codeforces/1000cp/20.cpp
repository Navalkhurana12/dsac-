#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a, b;
    cin>>a>>b;
    if(a==b&&a==1){
      cout<<3;
      cout<<endl;
      continue;
    }
    long long xr=0;
    for(int i=0;i<a;i++){
      xr=xr^i;
    }
    if(xr==b)cout<<a;
    else cout<<a+1;
    cout<<endl;
  }
}
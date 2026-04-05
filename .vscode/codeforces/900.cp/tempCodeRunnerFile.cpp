#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    if(n%9==0)cout<<10;
    else if(n==0)cout<<1;
    else cout<<0;
    cout<<endl;
  }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    while(true){
      long long  k=n;
      while(k){
       int ele = k%10;
       if(ele!=0&&n%ele != 0 )break;
        k=k/10;
      }
      if(k==0){
        cout<<n;
        break;
      }
      n=n+1;
    }
    cout<<endl;
  }
}
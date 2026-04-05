#include<bits/stdc++.h>
using namespace std;
bool isprime(int x){
  if(x<4)return true;
  for(int i=4;i<=sqrt(x);i++){
    if(x%i==0)return false;
  }
  return true;
}
int isp(int x){
  while(!isprime(x))x++;
  return x;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    long long d;
    cin>>d;
    long long  f=isp(1+d);
    long long s=isp(f+d);
    long long mul=f*s;
    cout<<mul<<endl;
  }
}
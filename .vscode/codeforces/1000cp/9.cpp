#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    int minn=INT_MAX;
    int f=1,s=1;
    for(long long i=1;i<((n/2)+1);i++){
     long long  a=n-i;
     long long mul=a*i;
     mul=mul/(__gcd(a,i));
     if(mul<minn){
      minn=mul;
      f=i;
      s=n-i;
     }
    }
    cout<<f<<" "<<s<<endl;
  }
}
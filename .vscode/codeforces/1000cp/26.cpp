#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long x,y,k;
    cin>>x>>y>>k;
    long long ele=(y*k)+k;
    ele=ele-1;
    if(ele%(x-1)==0){
      
      long long a=ele/(x-1);
      a=a+k;
      cout<<a;
    }
    else{
      long long a=ele/(x-1);
      a=a+1+k;
      cout<<a;
    }
    cout<<endl;
  }
}
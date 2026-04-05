#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    if(n%2!=0)cout<<1;
    else{
      int count=0;
      int maxx=0;
      for(int i=1;i<101;i++){
        if(n%i==0)count++;
        else {
          maxx=max(maxx,count);
          count=0;
        }
      }
      cout<<maxx;
    }
    cout<<endl;
  }
}
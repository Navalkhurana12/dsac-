#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    int count=0;
    bool ans=false;
    while(n>1){
      if(n%6==0){
        n=n/6;
      }
      else if(n%3==0)n=n*2;
      else {
        ans=true;
        cout<<-1;
        break;
      } 
      count++;
    }
    if(ans==false)cout<<count;
    cout<<endl;
  }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;
    if(a<b)swap(a,b);
    int op=0;
    while(a!=b&&a%2==0){
      a=a/2;
      op++;
    }
  if(a!=b){
    cout<<-1;
  }
  else{
    int c=0;
    while(op>=3){
      op=op-3;
      c++;
    }
    while(op>=2){
      c++;
      op=op-2;
    }
    while(op>=1){
      c++;
      op=op-1;
    }
    cout<<c;
  }
  cout<<endl;
  }
}
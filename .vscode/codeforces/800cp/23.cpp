#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d)cout<<-1;
    else{
      int op=0;
      int e=d-b;
      op+=e;
      a=a+e;
      if(a<c)cout<<-1;
      else{
        op+=a-c;
        cout<<op;
      }
    }
    cout<<endl;
  }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b;
    cin>>a>>b;
    int minn=1e8;
    for(int add=0;add<32;add++){
      int op=add;
      int b1=b+add;
      if(b1==1)continue;
      int a1=a;
      while(a1!=0){
        op++;
        a1=a1/b1;
      }
      minn=min(minn,op);
    }
    cout<<minn<<endl;
  }
}
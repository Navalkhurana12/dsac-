#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long count=0;
    int z=-1,f=-1;
    while(n){
      if(n%10==5&&z==1)break;
      else if(n%10==2&&f==1)break;
      else if(n%10==7&&f==1)break;
      else if(n%10==0&&z==-1)z=1;
      else if(n%10==0&&z==1)break;
      else if(n%10==5&&f==-1)f=1;
      else{
        count++;
      }
      n=n/10;
    }
    if(f==1&&z==1)count++;
    cout<<count;
    cout<<endl;
  }
}
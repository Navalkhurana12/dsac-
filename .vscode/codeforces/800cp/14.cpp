#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
     c=c%2;
     a=a+c;
     if(a>b)cout<<"First";
     else cout<<"Second";
     cout<<endl;
  }
}
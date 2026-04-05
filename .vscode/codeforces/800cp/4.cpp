#include<bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n%3==1||((n+1)%3==0))cout<<"First";
    else cout<<"Second";
    cout<<endl;
  }
  return 0;
}
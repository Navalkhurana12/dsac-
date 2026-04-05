#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    if(a==n&&b==n)cout<<"YES";
    else{
      if(a+b<n-1)cout<<"YES";
      else cout<<"NO";
    }
    cout<<endl;
  }
}
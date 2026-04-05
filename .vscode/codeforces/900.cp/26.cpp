#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long  n;
    cin>>n;
    bool ans=false;
    while(n>1){
      if(n%2==1){
        ans=true;
        cout<<"YES";
        break;
      }
      n=n/2;
    }
    if(ans==false)cout<<"NO";
    cout<<endl;

  }
}
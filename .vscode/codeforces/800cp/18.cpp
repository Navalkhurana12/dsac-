#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int x,k;
    cin>>x;
    cin>>k;
    if(x%k!=0){
      cout<<1<<endl;
      cout<<x;
    }
    else {
       cout<<2<<endl;
       cout<<x-1<<" "<<1;
      }
      cout<<endl;
    }
  }


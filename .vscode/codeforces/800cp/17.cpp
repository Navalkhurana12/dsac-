#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k,x;
    cin>>n>>k>>x;
    if(k==1&&x==1)cout<<"NO";
    else if(x!=1){
      cout<<"YES"<<endl;
      cout<<n<<endl;
      while(n--){
        cout<<1<<" ";
      }
    }
    else {
      if(n%2==0){
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        while(n>0){
          cout<<2<<" ";
          n=n-2;
        }
      }
      else if(k>=3) {
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        while(n>3){
          cout<<2<<" ";
          n=n-2;
        }
        cout<<3;
      }
      else cout<<"NO";
    }
    cout<<endl;
  }
}
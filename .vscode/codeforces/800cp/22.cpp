#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long  n,k;
    cin>>n>>k;
    if(n%2==0||n==k)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
  }
}
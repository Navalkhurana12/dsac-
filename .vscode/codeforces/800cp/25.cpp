#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0,j=n-1;
    int minn=n+1;
    while(i<=j){
      if((s[i]=='1'&&s[j]=='0') || (s[i]=='0'&& s[j]=='1')){
        i++;
        j--;
      }
     else {
      minn=min(minn,j-i+1);
       break;}
    }
    if(minn==n+1)cout<<0;
    else cout<<minn;
    cout<<endl;
  }
}
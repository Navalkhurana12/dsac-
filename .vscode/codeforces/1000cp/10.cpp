#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    if(c=='g'){
      cout<<0<<endl;
      continue;
    }
    s=s+s;
    int i=0;
    int j=0;
    int k=-1;
    int maxx=0;
    while(j<2*n){
      if(s[j]==c&&k==-1){
        i=j;
        k=1;
      }
      if(s[j]=='g'&&k!=-1){
        maxx=max(maxx,(j-i));
        k=-1;
      }
      j++;
    }
    cout<<maxx<<endl;
  }
}
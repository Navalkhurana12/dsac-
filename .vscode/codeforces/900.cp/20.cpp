#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int ab=0;
    int ba=0;
    int n=s.size();
    for(int i=0;i<n-1;i++){
      if(s[i]=='a'&&s[i+1]=='b')ab++;
      if(s[i]=='b'&&s[i+1]=='a')ba++;
    }
    if(ab==ba)cout<<s;
    else if(ab>ba){
      int k=0;
      for(int i=n-1;i>=0;i--){
        while(i>=0&&s[i]=='b'){
          k=1;
          s[i]='a';
          i--;
        }
       if(k==1)break;
      }
      cout<<s;
    }
    else{
      int k=0;
      for(int i=n-1;i>=0;i--){
        while(i>=0&&s[i]=='a'){
          k=1;
          s[i]='b';
          i--;
        }
       if(k==1)break;
      }
      cout<<s;
    }
    cout<<endl;
  }
}
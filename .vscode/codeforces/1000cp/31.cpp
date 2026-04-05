#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<int>store(26,-1);
  store[s[n-1]-'a']=n-1;
  int f=-1;
  int s1=-1;
  for(int i=n-2;i>=0;i--){
    for(int j=0;j<26;j++){
      if(store[j]!=-1&&j<(s[i]-'a')){
       f=i+1;
       s1=store[j]+1;
       break;
      }
      
    }
     store[s[i]-'a']=i;
  }
  if(f==-1&&s1==-1)cout<<"NO";
  else {
    cout<<"yes"<<endl;
    cout<<f<<" "<<s1;
  }
  cout<<endl;
}
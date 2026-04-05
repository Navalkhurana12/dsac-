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
  vector<int>p(n,1);
  vector<int>sf(n,1);
  unordered_set<char>st;
  for(int i=0;i<n;i++){
    st.insert(s[i]);
    p[i]=st.size();
  }
  unordered_set<char>st1;
  for(int i=n-1;i>=0;i--){
    st1.insert(s[i]);
    sf[i]=st1.size();
  }
  int maxx=2;
  for(int i=0;i<n-1;i++){
    maxx=max(maxx,p[i]+sf[i+1]);
  }
  cout<<maxx<<endl;
  }
}
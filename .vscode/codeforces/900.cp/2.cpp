#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int k;
    cin>>k;
    string s;
    cin>>s;
    unordered_map<char,int>mp;
    for(char c:s)mp[c]++;
    for(auto it:mp){
      if(it.second%2!=0)k--;
    }
    if(k>=-1)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
  }
}
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
    unordered_set<char>st;
    long long sum=0;
    for(char c:s){
      st.insert(c);
      sum+=st.size();
    }
    cout<<sum<<endl;
  }
}
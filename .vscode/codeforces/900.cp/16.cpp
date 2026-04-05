#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int n=s.size();
    int m=t.size();
    int i=n-1,j=m-1;
    unordered_set<char>st;
    bool ans=false;
    while(i>=0&&j>=0){
      if(t[j]!=s[i]){
        st.insert(s[i]);
      }
      else{
        if(st.find(t[j])!=st.end()){
          ans=true;
          break;
        }
        j--;
      }
      i--;
    }
    if(ans==true||j>=0)cout<<"NO";
    else cout<<"YES";
    cout<<endl;
  }
}
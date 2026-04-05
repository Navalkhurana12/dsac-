#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a1=0;
    int k=0;
    int q=0;
    for(int i=0;i<n;i++){
      if(s[i]=='.'){
        a1++;
        k++;
        if(k>2){
          cout<<2;
          q=1;
          cout<<endl;
          break;
        }
      }
      else k=0;
    
    }
    if(k==0)cout<<a1;
    cout<<endl;
  }
  return 0;
}
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
    int o1=0,o2=0;
    int maxx=0;
    for(char c:s){
      if(c=='<'){
        o1++;
        o2=0;
      }
      else{
        o2++;
        o1=0;
      }
      maxx=max(maxx,max(o1,o2));
    }
    cout<<maxx+1;
    cout<<endl;

  }
}
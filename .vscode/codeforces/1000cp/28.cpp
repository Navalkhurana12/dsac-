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
    int co=0;
    int maxx=0;
    for(char c:s){
      if(c==')')co=co+1;
      else co=co-1;
      maxx=max(maxx,co);
    }
    cout<<maxx;
    cout<<endl;
  }
}
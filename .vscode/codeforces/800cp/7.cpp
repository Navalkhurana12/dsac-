#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x;
    cin>>s;
    string ans=x;
    int op=0;
    bool k=false;
    while(true){
      if(ans.size()>=s.size())
      for(int i=0;i<ans.size();i++){
        if(ans.substr(i,m)==s){
          cout<<op;
          k=true;
          break;
        }
      }
      if(k==true)break;
      if(ans.size()>s.size()&&op>2){
        cout<<-1;
        break;
      }
      op++;
      ans+=ans;
    }
    cout<<endl;
  }
}
  #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int z=0,o=0;
      for(char c:s){
        if(c=='1')o++;
        else z++;
      }
      string ans="";
      for(char c:s){
        if(c=='1'&&z>0){
          ans+='0';
          z--;
        }
        else if(c=='0'&& o>0){
          ans+='1';
          o--;
        }
        else break;
      }
      int n=ans.size();
      int op=s.size()-n;
      cout<<op<<endl;
    }
  }
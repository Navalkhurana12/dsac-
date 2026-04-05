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
     if(c=='0')z++;
     else o++;
    }
    int curr=min(o,z);
    if(curr%2==0)cout<<"NET";
    else cout<<"DA";
    cout<<endl;
  }
}
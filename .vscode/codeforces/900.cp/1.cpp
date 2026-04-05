#include<bits/stdc++.h>
using namespace std;
int  main(){
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    int xk,yk;
    cin>>xk>>yk;
    int xq,yq;
    cin>>xq>>yq;
    set<pair<int,int>>night;
    night.insert({a,b});
    night.insert({-a,b});
    night.insert({a,-b});
    night.insert({-a,-b});
    night.insert({b,a});
    night.insert({-b,a});
    night.insert({b,-a});
    night.insert({-b,-a});
    set<pair<int,int>>king;
    for(auto& it:night){
      int i=xk+it.first;
      int j=yk+it.second;
      king.insert({i,j});
    }
    set<pair<int,int>>queen;
    for(auto &it:night){
      int i=xq+it.first;
      int j=yq+it.second;
      queen.insert({i,j});
    }
    int op=0;
    for(auto it:king){




    
      int i=it.first;
      int j=it.second;
      if(queen.find({i,j})!=queen.end()){
        op++;
      }
    }
    cout<<op<<endl;
  }
}
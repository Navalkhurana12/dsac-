#include<bits/stdc++.h>
using namespace std;
vector<int>parent;
vector<int>Rank;
int solve(int x){
  return parent[x]==x?x:solve(parent[x]);
}
void unio(int a,int b){
 int x=solve(a);
 int y=solve(b);
 if(x==y)return ;
  if(Rank[x]>Rank[y]){
    parent[y]=x;
  }
  else if(Rank[x]>Rank[y]){
    parent[x]=y;
  }
  else {
        parent[y] = x;
        Rank[x]++;
    }
}
int main(){
  cout<<"enter the no of node and   quieries a";
  int n,m;
  cin>>n>>m;
  parent.resize(n);
  Rank.resize(n,0);
  for(int i=0;i<n;i++){
   parent[i]=i;
  }
  for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    unio(a,b);
  }
  for(int i=0;i<n;i++){
    cout<<parent[i]<<" ";
  }
}
#include<bits/stdc++.h>
using namespace std;
vector<int>parent;
vector<int>rnk;
struct edge{
  int src,des,wt;
};
vector<edge>graph;
int find(int a){
  return parent[a]=(parent[a]==a)?a:find(parent[a]);
}
void uni(int a,int b){
  int x=find(a);
  int y=find(b);
  if(x==y)return ;
  if(rnk[x]<rnk[y]){
    parent[x]=y;
  }
  else if(rnk[y]<rnk[x]){
    parent[y]=x;
  }
  else{
    parent[y]=x;
    rnk[x]++;
  }
}
int  kruskal(int n){
  int weight=0;
  for(auto e:graph){
    int pu=find(e.src);
    int pv=find(e.des);
    if(pu!=pv){
      weight+=e.wt;
      uni(e.src,e.des);
    }
  }
  return weight;
}
bool cmp(edge a,edge b){
  return a.wt<b.wt;
}
int main(){
  int n,e;
  cout<<"enter the no of vertices and no of edge";
  cin>>n>>e;
  parent.resize(n);
  rnk.resize(n,0);
  for(int i=0;i<n;i++)parent[i]=i;
  cout<<"enter the src des and wt ";
  for(int i=0;i<e;i++){
   int src ,des,wt;
   cin>>src>>des>>wt;
   graph.push_back({src,des,wt});
  }
  sort(graph.begin(),graph.end(),cmp);
  cout<<"total minimum wieght is"<< kruskal(n);
}

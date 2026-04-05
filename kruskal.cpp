#include<bits/stdc++.h>
using namespace std;
int find(vector<int>&parent,int a){
  return parent[a]=(parent[a]==a)?a:find(parent,parent[a]);
}
void Uni(int a,int b,vector<int>&parent,vector<int>&rank){
  int x=find(parent,a);
  int y=find(parent,b);
  if(x==y)return ;
  if(rank[x]<rank[y]){
    parent[x]=y;
  }
  else if(rank[x]<rank[y]){
    parent[y]=x;
  }
   else {
        parent[y] = x;
        rank[x]++;
    }
}
struct edge{
  int src, des, wt;
};
bool cmp(edge &a,edge &b){
  return a.wt<b.wt;
}
void kruskal(vector<edge> &arr,int n){
  sort(arr.begin(),arr.end(),cmp);
  vector<int>parent(n);
  vector<int>rank(n,0);
  for(int i=0;i<n;i++)parent[i]=i;
  int mstw=0;
  for(auto e:arr){
    int u=e.src;
    int v=e.des;
    int pu=find(parent,u);
    int pv=find(parent,v);
    if(pu!=pv){
      cout << u << " -- " << v << "  wt = " << e.wt << "\n";
            mstw += e.wt;
            Uni(pu, pv, parent, rank);
    }
     cout << "Total weight of MST = " << mstw << "\n";
  }
}
int main(){
  vector<edge> arr;
  int n,e;
  cout<<"enter the no of vercties and edge";
  cin>>n>>e;
  cout<<"enter the no of src des and weight ";
  for(int i=0;i<e;i++){
    int src,des,wt;
    cin>>src>>des>>wt;
    arr.push_back({src,des,wt});
  }
  kruskal(arr,n);

}
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>p;
vector<list<p>>graph;
void add(int src,int des,int wt){
  graph[src].push_back({des,wt});
  graph[des].push_back({src,wt});
}
int prims(int n){
  priority_queue<p,vector<p>,greater<p>>min;
  unordered_map<int,int>mp;
  unordered_set<int>visit;
  for(int i=0;i<n;i++){
    mp[i]=INT_MAX;
  }
  mp[0]=0;
  int w=0;
  int totalcount=0;
  min.push({0,0});
  while(totalcount <n &&!min.empty()){
    auto curr=min.top();
    if (visit.count(curr.second))
    {
       min.pop();
       continue;
    }
    totalcount++;
    w+=curr.first;
    for(auto neigh:graph[curr.second]){
      if(!visit.count(neigh.first) && mp[neigh.first]>neigh.second){
         min.push({neigh.second, neigh.first});
        mp[neigh.first] = neigh.second;
      }
    }
    return  w;
  }

}
int main(){
   int n,e;
   cin>>n>>e;
   graph.resize(n);
   cout<<"enter the src and des";
   for(int i=0;i<e;i++){
     int src,des, wt;
     cin>>src>>des>>wt;
    add(src,des,wt);
   }

}
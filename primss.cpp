#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>p;
vector<list<p>>graph;
priority_queue<p,vector<p>,greater<p>>min;
unordered_map<int,int>mp;
void add(int src,int des,int wt){
      graph[src].push_back({des,wt});
      graph[des].push_back({src,wt});
}
int prims(int src,int n){
   unordered_set<int>st;
   min.push({0,0});
   
}
int main(){
  int n,e;
  cout<<"enter the no of vertices and esge";
  cin>>n>>e;
  cout<<"enter the src des and wt";
  for(int i=0;i<n;i++){
    int src, des,wt;
    cin>>src>>des>>wt;
    add(src,des,wt);
  }
  for(int i=0;i<n;i++){
    mp[i]=INT_MAX;
  }

}
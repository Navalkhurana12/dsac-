#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <climits>
#include <list>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visit;
void add(int src, int des, bool bider = true)
{
  graph[src].push_back(des);
  if (bider)
    graph[des].push_back(src);
}
void bfs(int src, vector<int> &dist)
{
  queue<int> q;
  dist[src] = 0;
  visit.insert(src);
  q.push(src);
  while (!q.empty())
  {
    int curr = q.front();
    q.pop();
    for (auto neighbour : graph[curr])
    {
      if (visit.find(neighbour) == visit.end())
      {
        q.push(neighbour);

        visit.insert(neighbour);
        dist[neighbour] = dist[curr] + 1;
      }
    }
  }
}
int main()
{
  int e, v;
  cout << "enter edges and vertices";
  cin >> e >> v;
  cout << "enter src and desc for give edge" << e;
  graph.resize(v);
  visit.clear();
  while (e--)
  {
    int src, des;
    cin >> src >> des;
    add(src, des);
  }
  vector<int> dis(v, INT_MAX);
  cout << "enter the source of starting point";
  int src;
  cin >> src;
  bfs(src, dis);
  for (int i = 0; i < dis.size(); i++)
  {
    cout << dis[i] << " ";
  }
}
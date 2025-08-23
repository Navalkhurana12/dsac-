#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;
vector<list<int>> graph;
vector<int> indegree;
queue<int> q;
void add(int src, int des, bool bid)
{
  graph[src].push_back(des);
  if (bid)
  {
    graph[des].push_back(src);
  }
}
void topological()
{
  while (!q.empty())
  {
    int ele = q.front();
    cout << ele << " ";
    q.pop();
    for (auto neighbour : graph[ele])
    {
      indegree[neighbour]--;
      if (indegree[neighbour] == 0)
        q.push(neighbour);
    }
  }
}
int main()
{
  int e, v;
  cout << "enter the no of edges and vertices ";
  cin >> e >> v;
  graph.resize(v);
  while (e--)
  {
    int src, des;
    cin >> src >> des;
    add(src, des, false);
  }
  indegree.resize(v, 0);
  for (int i = 0; i < v; i++)
  {
    for (auto neighbour : graph[i])
    {
      indegree[neighbour]++;
    }
  }
  for (int i = 0; i < v; i++)
  {
    if (indegree[i] == 0)
      q.push(i);
  }
  topological();
}
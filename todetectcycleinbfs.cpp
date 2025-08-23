#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;
vector<list<int>> graph;
vector<int> visit;
void add(int src, int des, bool bider)
{
  graph[src].push_back(des);
}
bool dfs(int i, int parent, unordered_set<int> &visit)
{
  visit.insert(i);
  for (auto neighbhour : graph[i])
  {
    if (visit.find(neighbhour) != visit.end() && neighbhour != parent)
    {
      return true;
    }
    if (visit.find(neighbhour) == visit.end())
      if (dfs(neighbhour, i, visit))
        return true;
  }
  return false;
}
bool detect_cycle(int v)
{
  unordered_set<int> visit;
  bool result = false;
  for (int i = 0; i < v; i++)
  {
    if (visit.find(i) == visit.end())
    {
      result = dfs(i, -1, visit);
    }
    }
  return result;
}
int main()
{
  int v, e;
  cout << "enter the vertices and edges";
  cin >> v >> e;
  graph.resize(v);
  visit.resize(v, -1);
  while (e--)
  {
    int src, des;
    cin >> src >> des;
    add(src, des, false);
  }
  cout << detect_cycle(v);
}
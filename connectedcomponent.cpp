#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>
using namespace std;
vector<list<int>> graph;
unordered_set<int> st;
void add(int src, int des, bool bide = true)
{
  graph[src].push_back(des);
  if (bide)
    graph[des].push_back(src);
}
void dfs(int i)
{
  for (auto neighbour : graph[i])
  {
    if (not st.count(neighbour) == 0)
    {
      st.insert(neighbour);
      dfs(neighbour);
    }
  }
}
int connected_comp()
{
  int result = 0;
  for (int i = 0; i < graph.size(); i++)
  {
    if (not st.count(i) == 0)
    {
      st.insert(i);
      dfs(i);
      result++;
    }
  }
  return result;
}

int main()
{
  int e, v;
  cout << "enter edge and vertices";
  cin >> e >> v;
  graph.resize(v);
  cout << "enter no of edge" << e;
  while (e--)
  {
    int src, des;
    cin >> src >> des;
    add(src, des);
  }
  cout << connected_comp();
}

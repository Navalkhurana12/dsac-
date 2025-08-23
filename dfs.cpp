#include <iostream>
#include <vector>
#include <unordered_set>
#include <list>
using namespace std;

vector<list<int>> graph;
unordered_set<int> st;
void add(int src, int des, bool biderc = true)
{
  graph[src].push_back(des);
  if (biderc)
  {
    graph[des].push_back(src);
  }
}
bool dfs(int curr, int end)
{
  if (curr == end)
    return true;
  st.insert(curr);
  for (auto neighbours : graph[curr])
  {

    if (st.find(neighbours) == st.end())
    {
      st.insert(neighbours);
      bool result = dfs(neighbours, end);
      if (result)
        return true;
    }
  }
  return false;
}
bool find(int src, int des)
{
  return dfs(src, des);
}
int main()
{
  int e, v;
  cout << "enter the edge and vertices";
  cin >> e >> v;
  cout << "enter sources and destination for" << e << "edges";
  graph.resize(v);
  st.clear();
  while (e--)
  {
    int src, des;
    cin >> src >> des;
    add(src, des);
  }
  int start, end;
  cout << "enter the start and end";
  cin >> start >> end;
  cout << "path is exits " << find(start, end);
}

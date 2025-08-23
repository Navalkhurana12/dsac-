#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> st;
vector<vector<int>> result;
void add(int src, int des, bool bider = true)
{
  graph[src].push_back(des);
  if (bider)
  {
    graph[des].push_back(src);
  }
}
void find(int curr, int end, vector<int> path)
{
  if (curr == end)
  {
    path.push_back(curr);
    result.push_back(path);
    path.pop_back();
    return;
  }
  st.insert(curr);
  path.push_back(curr);
  for (auto neighbour : graph[curr])
  {
    if (st.find(neighbour) == st.end())
    {
      find(neighbour, end, path);
    }
  }
  path.pop_back();
  st.erase(curr);
  return;
}
int main()
{
  int edge, ver;
  cout << "enter the edge and vertices for a given graph";
  cin >> edge >> ver;
  cout << "enter the src and estination for " << edge;
  graph.resize(ver);
  st.clear();
  while (edge--)
  {
    int src, des;
    cin >> src >> des;
    add(src, des);
  }
  int start, end;
  vector<int> path;
  cout << "enter tha starting and ending ";
  cin >> start >> end;
  find(start, end, path);
  for (auto ele : result)
  {
    for (auto e : ele)
    {
      cout << e << " ";
    }
    cout << endl;
  }
}
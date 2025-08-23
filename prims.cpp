#include <bits/stdc++.h>
#define pp pair<int, int>
using namespace std;
vector<list<pp>> graph;
void add_edge(int src, int des, int wt, bool dire)
{
  graph[src].push_back({des, wt});
  if (!dire)
  {
    graph[des].push_back({src, wt});
  }
}
int prims(int n, int e, int src)
{
  priority_queue<pp, vector<pp>, greater<>> pq;
  unordered_set<int> visit;
  unordered_map<int, int> mp;
  for (int i = 1; i <= n; i++)
  {
    mp[i] = INT_MAX;
  }
  mp[src] = 0;
  pq.push({0, src});
  int totalcount = 0;
  int w = 0;
  vector<int> par(n + 1, -1);
  while (totalcount < n && !pq.empty())
  {
    auto curr = pq.top();
    if (visit.find(curr.second) != visit.end())
    {
      pq.pop();
      continue;
    }
    visit.insert(curr.second);
    totalcount++;
    w += curr.first;
    for (auto neighbour : graph[curr.second])
    {
      if (visit.find(neighbour.first) == visit.end() && mp[neighbour.first] > neighbour.second)
      {
        pq.push({neighbour.second, neighbour.first});
        par[neighbour.first] = curr.second;
        mp[neighbour.first] = neighbour.second;
      }
    }
  }
  cout << "MST Edges:\n";
  for (int i = 1; i <= n; i++)
  {
    if (par[i] != -1)
      cout << par[i] << " - " << i << " (weight: " << mp[i] << ")\n";
  }
  return w;
}
int main()
{
  int n, e;
  cout << "enter the no of verticesand egdges";
  cin >> n >> e;
  graph.resize(n + 1);
  cout << "enter the src and weight of egdes";
  int sr, des, wt;
  for (int i = 0; i < e; i++)
  {
    cin >> sr >> des >> wt;
    add_edge(sr, des, wt, false);
  }
  cout << prims(n, e, 1);
}
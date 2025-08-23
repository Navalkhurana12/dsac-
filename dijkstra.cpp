#include <bits/stdc++.h>
#define pp pair<int, int>
#define ll long long int
using namespace std;
vector<list<pp>> graph;
void add_edge(int src, int des, int wt, bool bider)
{
  graph[src].push_back({des, wt});
  if (bider)
    graph[des].push_back({src, wt});
}
unordered_map<int, int> kruskals(int e, int n, int src)
{
  priority_queue<pp, vector<pp>, greater<>> pq;
  pq.push({0, src});
  unordered_map<int, int> mp(n + 1);
  for (int i = 1; i <= n; i++)
  {
    mp[i] = INT_MAX;
  }
  unordered_set<int> visit;
  while (!pq.empty())
  {
    auto curr = pq.top();
    if (visit.find(curr.second) != visit.end())
    {
      pq.pop();
      continue;
    }
    visit.insert(curr.second);
    for (auto neighbour : graph[curr.second])
    {
      if (!visit.count(neighbour.first) && mp[neighbour.first] > mp[curr.second] + neighbour.second)
      {
        pq.push({mp[curr.second] + neighbour.second, neighbour.first});
      }
    }
  }
}
int main()
{
  int n, e;
  cout << "enter the no of vertices and edge";
  cin >> n >> e;
  graph.resize(e);
  cout << "enter the src,des and wt of e";
  for (int i = 0; i < e; i++)
  {
    int src, des, wt;
    cin >> src >> des >> wt;
    add_edge(src, des, wt, true);
  }
  unordered_map<int, int> mp = kruskals(e, n, 1);
}
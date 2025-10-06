#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;
vector<list<p>> graph;
void add(int src, int des, int weight)
{
  graph[src].push_back({des, weight});
  graph[des].push_back({src, weight});
}
int main()
{
  int node, edge;
  cout << "enter the no of node and edge";
  cin >> node >> edge;
  graph.resize(node);
  cout << "enter the src,des,weight ";
  for (int i = 0; i < edge; i++)
  {
    int src, des, weight;
    cin >> src >> des >> weight;
    add(src, des, weight);
  }
  for (int i = 0; i < edge; i++)
  {
    for (auto it : graph[i])
    {
      cout << "src" << i << it.first << it.second << endl;
    }
  }
}
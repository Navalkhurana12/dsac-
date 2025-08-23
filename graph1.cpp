#include <iostream>
#include <vector>
#include <list>
using namespace std;
vector<list<int>> grap;
void add(int src, int dest, bool bidirec = true)
{
  grap[src].push_back(dest);
  if (bidirec == true)
  {
    grap[dest].push_back(src);
  }
}
void display()
{
  for (int i = 0; i < grap.size(); i++)
  {
    cout << i << " --> ";
    for (int k : grap[i])
    {
      cout << k << " ";
    }
    cout << "\n";
  }
}
int main()
{
  int v, e;
  cout << "Enter number of vertices and edges: ";
  cin >> v >> e;
  grap.resize(v);
  cout << "Enter " << e << " edges (src dest):\n";
  while (e--)
  {
    int src, desc;
    cin >> src >> desc;
    add(src, desc);
  }
  cout << "\nGraph adjacency list:\n";
  display();
}
#include <iostream>
#include <vector>
using namespace std;
int find(vector<int> &parent, int x)
{
  return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}
bool unionn(int a, int b, vector<int> &parent, vector<int> &rank)
{
  a = find(parent, a);
  b = find(parent, b);
  if (a == b)
    return true;
  if (rank[a] >= rank[b])
  {
    rank[a]++;
    parent[b] = a;
  }
  else
  {
    rank[b]++;
    parent[a] = b;
  }
  return false;
}

int main()
{
  cout << "enter no of elements and queries";
  int n, m;
  cin >> n >> m;
  vector<int> rank(n + 1, 0);
  vector<int> parent(n + 1);
  for (int i = 0; i < n; i++)
  {
    parent[i] = i;
  }
  while (m--)
  {
    int a, b;
    cin >> a >> b;
    bool ans = unionn(a, b, parent, rank);
    if (ans == true)
    {
      cout << "cycle dected";
      break;
    }
  }
}
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int find(vector<int> &parent, int x)
{
  return parent[x] = (parent[x] == x) ? x : find(parent, parent[x]);
}
void unionn(vector<int> &parent, vector<int> &rank, int a, int b, vector<int> &minimal, vector<int> &maximal, vector<int> &sz)
{
  a = find(parent, a);
  b = find(parent, b);
  if (a == b)
    return;
  if (rank[a] >= rank[b])
  {
    rank[a]++;
    parent[b] = a;
    minimal[a] = min(minimal[a], minimal[b]);
    maximal[a] = max(maximal[a], maximal[b]);
    sz[a] += sz[b];
  }
  else
  {
    rank[b]++;
    parent[a] = b;
    minimal[b] = min(minimal[a], minimal[b]);
    maximal[b] = max(maximal[a], maximal[b]);
    sz[b] += sz[a];
  }
}
int main()
{
  int n, m;
  cout << "enter the no of element nadd query";
  // n->elemts and m->no of query
  cin >> n >> m;
  vector<int> parent(n + 1);
  vector<int> rank(n + 1, 0);
  vector<int> maximal(n + 1);
  vector<int> minimal(n + 1);
  vector<int> size(n + 1, 1);
  for (int i = 0; i <= n; i++)
  {
    parent[i] = i;
    maximal[i] = i;
    minimal[i] = i;
  }
  while (m--)
  {
    string str;
    cin >> str;
    if (str == "union")
    {
      int x, y;
      cin >> x >> y;
      unionn(parent, rank, x, y, minimal, maximal, size);
    }
    else
    {
      int x;
      cin >> x;
      if (x > n)
        continue;
      int l = find(parent, x);
      cout << maximal[l] << " " << minimal[l] << " " << size[l];
    }
  }
}
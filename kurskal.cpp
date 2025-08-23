#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// Find operation with path compression
int find(vector<int> &parent, int a)
{
  return parent[a] = (parent[a] == a) ? a : find(parent, parent[a]);
}

// Union by rank - renamed to avoid C++ 'union' keyword conflict
void unionSets(vector<int> &par, vector<int> &rank, int a, int b)
{
  a = find(par, a);
  b = find(par, b);
  if (a == b)
    return;

  if (rank[a] >= rank[b])
  {
    rank[a]++;
    par[b] = a;
  }
  else
  {
    rank[b]++;
    par[a] = b;
  }
}

// Edge structure
struct edge
{
  int src;
  int dest;
  int wt;
};

// Comparator for sorting edges
bool cmp(edge e1, edge e2)
{
  return e1.wt < e2.wt;
}

// Kruskal's algorithm
ll kruskals(vector<edge> &input, int n, int e)
{
  // Sort edges by weight
  sort(input.begin(), input.end(), cmp);

  vector<int> parent(n + 1);
  vector<int> rank(n + 1, 1);

  // Initialize each node's parent to itself
  for (int i = 0; i <= n; i++)
  {
    parent[i] = i;
  }

  int edgecount = 0;
  int i = 0;
  ll ans = 0;

  while (edgecount < n - 1 && i < e)
  {
    edge curr = input[i];
    int srcpar = find(parent, curr.src);
    int despar = find(parent, curr.dest);

    if (srcpar != despar)
    {
      unionSets(parent, rank, srcpar, despar);
      ans += curr.wt;
      edgecount++;
    }
    i++;
  }

  return ans;
}

// Main function
int main()
{
  int n, e;
  cin >> n >> e;

  vector<edge> input(e);
  cout << "enter the src,des and weight for edge times ";
  for (int i = 0; i < e; i++)
  {

    cin >> input[i].src >> input[i].dest >> input[i].wt;
  }

  ll totalWeight = kruskals(input, n, e);
  cout << "Minimum cost of spanning tree: " << totalWeight << endl;

  return 0;
}

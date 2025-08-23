#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<vector<int>> visit;
int cnt;
void solve(int i, int j, int n, vector<vector<int>> &grid)
{
  if (i < 0 || j < 0 || i >= n || j >= n)
    return;
  if (i == n - 1 && j == n - 1)
  {
    cnt++;
    return;
  }
  if (grid[i][j] == 1 || visit[i][j] != 0)
    return;
  visit[i][j] = 1;
  for (auto d : dir)
  {
    solve(i + d[0], j + d[1], n, grid);
  }
  visit[i][j] = 0;
}
int main()
{
  int n;
  cout << "enter the size of path";
  cin >> n;
  visit.resize(n, vector<int>(n, 0));
  vector<vector<int>> grid(n, vector<int>(n));
  cout << "enter the elements of 0  for open cell or 1 for blocked";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> grid[i][j];
    }
  }
  cnt = 0;
  solve(0, 0, n, grid);
  cout << cnt;
}
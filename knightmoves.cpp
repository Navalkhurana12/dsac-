#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dir = {
    {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

bool safe(int i, int j, int n, vector<vector<int>> &grid)
{
  return (i >= 0 && i < n && j >= 0 && j < n && grid[i][j] == -1);
}

void display(vector<vector<int>> &grid)
{
  for (int i = 0; i < grid.size(); i++)
  {
    for (int j = 0; j < grid[0].size(); j++)
    {
      cout << setw(2) << grid[i][j] << " ";
    }
    cout << "\n";
  }
  cout << "--------------------------\n";
}

void f(int i, int j, int n, vector<vector<int>> &grid, int count)
{
  if (count == n * n - 1)
  {
    grid[i][j] = count;
    display(grid);
    grid[i][j] = -1; // Backtrack
    return;
  }

  grid[i][j] = count; // Mark current cell

  for (auto &di : dir)
  {
    int ni = i + di[0];
    int nj = j + di[1];
    if (safe(ni, nj, n, grid))
    {
      f(ni, nj, n, grid, count + 1);
    }
  }

  grid[i][j] = -1; // Unmark before returning
}

int main()
{
  int n;
  cout << "Enter board size: ";
  cin >> n;

  vector<vector<int>> grid(n, vector<int>(n, -1));
  f(0, 0, n, grid, 0);
}

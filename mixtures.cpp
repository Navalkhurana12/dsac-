#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int g(vector<int> &colors, int i, int j)
{
  int result = 0;
  for (int k = i; k <= j; k++)
  {
    result = (result % 100 + colors[k] % 100) % 100;
  }
  return result;
}
int f(vector<int> &colors, int i, int j, vector<vector<int>> &dp)
{
  if (i == j)
    return dp[i][j] = 0;
  int result = INT_MAX;
  if (dp[i][j] != -1)
    return dp[i][j];
  for (int k = i; k < j; k++)
  {
    result = min(result, f(colors, i, k, dp) + f(colors, k + 1, j, dp) + (g(colors, i, k) * g(colors, k + 1, j)));
  }
  return dp[i][j] = result;
}
int main()
{
  int n;
  cout << "enter mixtures";
  vector<int> colors;
  vector<vector<int>> dp(105, vector<int>(105, -1));
  while (cin >> n)
  {
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      colors.push_back(x);
    }
    cout << f(colors, 0, colors.size() - 1, dp);
    colors.clear();
  }
}
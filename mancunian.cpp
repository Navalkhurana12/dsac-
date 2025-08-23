#include <iostream>
#include <vector>
using namespace std;
int f(int i, int j, int k, vector<int> &l1, vector<int> &l2, vector<vector<vector<int>>> &dp)
{
  if (i == l1.size() || j == l2.size())
    return 0;
  if (dp[i][j][k] != -1)
    return dp[i][j][k];
  int result = 0;
  if (l1[i] == l2[j])
  {
    result = 1 + f(i + 1, j + 1, k, l1, l2, dp);
  }
  else
  {
    if (k > 0)
    {
      result = 1 + f(i + 1, j + 1, k - 1, l1, l2, dp);
    }
    result = max(result, f(i + 1, j, k, l1, l2, dp));
    result = max(result, f(i, j + 1, k, l1, l2, dp));
  }
  return dp[i][j][k] = result;
}
int main()
{
  cout << "enter n, m and k";
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> l1(n);
  vector<int> l2(m);
  for (int i = 0; i < n; i++)
  {
    cin >> l1[i];
  }
  for (int i = 0; i < m; i++)
  {
    cin >> l2[i];
  }
  vector<vector<vector<int>>> dp(2005, vector<vector<int>>(2005, vector<int>(8, -1)));
  cout << f(0, 0, k, l1, l2, dp);
}

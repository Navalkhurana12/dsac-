#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int f(int i, int j, vector<int> &v, vector<vector<int>> dp)
{
  if (i == j || i + 1 == j)
    return 0;
  if (dp[i][j] != -1)
    return dp[i][j];
  int ans = INT_MAX;
  for (int k = i + 1; k < j; k++)
  {
    ans = min(ans, f(i, k, v, dp) + f(k, j, v, dp) + v[i] * v[j] * v[k]);
  }
  return dp[i][j] = ans;
}
int main()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  vector<vector<int>> dp(1005, vector<int>(1000, -1));
  cout << f(0, n - 1, v, dp);
}
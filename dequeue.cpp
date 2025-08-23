#include <iostream>
#include <vector>
using namespace std;
int f(int i, int j, vector<long long> &arr, vector<vector<long long>> dp)
{
  if (i == j)
    return arr[i];
  if (dp[i][j] != -1)
    return dp[i][j];
  return dp[i][j] = max(arr[i] - f(i + 1, j, arr, dp), arr[j] - f(i, j - 1, arr, dp));
}
int main()
{
  cout << "enter the value of n";
  int n;
  cin >> n;
  vector<long long> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<vector<long long>> dp(300, vector<long long>(3000, -1));
  cout << f(0, n - 1, arr, dp);
}
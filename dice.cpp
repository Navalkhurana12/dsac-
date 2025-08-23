#include <iostream>
#include <vector>
#define ll long long int
#define mod 100000007
using namespace std;
ll f(int n, vector<ll> &dp)
{
  if (n == 0)
    return 1;
  if (dp[n] != -1)
    return dp[n];
  ll ways = 0;
  for (int i = 1; i <= 6; i++)
  {
    if (n - i < 0)
      break;
    ways = ((ways % mod) + (f(n - i, dp) % mod)) % mod;
  }
  return dp[n] = ways % mod;
}
int btu(int n, vector<ll> &dp)
{
  dp[0] = 1;
  for (int i = 1; i <= n; i++)
  {
    ll ways = 0;
    for (int k = 1; k <= 6; k++)
    {
      if (i - k < 0)
        break;
      ways = ways + dp[i - k];
    }
    dp[i] = ways;
  }
  return dp[n];
}
int main()
{
  int n;
  cout << "enter value of sum";
  cin >> n;
  vector<ll> dp(n + 1, -1);
  cout << btu(n, dp) << " ways to get sum ";
}
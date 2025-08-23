#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> getdigits(int n)
{
  vector<int> result;
  while (n > 0)
  {
    if (n % 10 != 0)
    {
      result.push_back(n % 10);
    }
    n = n / 10;
  }
  return result;
}
int f(int num, vector<int> &dp)
{
  dp[0] = 0;
  for (int i = 1; i <= 9; i++)
    dp[i] = 1;

  for (int i = 10; i <= num; i++)
  {
    vector<int> digits = getdigits(i);
    int result = INT_MAX;
    for (int k = 0; k < digits.size(); k++)
    {

      result = min(result, dp[i - digits[k]]);
    }
    dp[i] = 1 + result;
  }
  return dp[num];
}
int main()
{
  int n;
  cout << "enter the value of n";
  cin >> n;
  vector<int> dp(n + 1, -1);
  cout << "mini steps" << f(n, dp);
}
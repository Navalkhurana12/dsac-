#include <bits/stdc++.h>
using namespace std;
int solve(int n, int m, vector<int> a, vector<int> b)
{

  int i = 0, j = 0;
  int hr = 1, vr = 1;
  int count = 0;
  while (i < n - 1 && j < m - 1)
  {
    if (a[i] >= b[j])
    {
      count += a[i] * vr;
      hr++;
      i++;
    }
    else
    {
      count += b[j] * hr;
      vr++;
      j++;
    }
  }
  while (i < n - 1)
    count += a[i++] * vr;
  while (j < m - 1)
    count += b[j++] * hr;
  return count;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    vector<int> a(n - 1);
    vector<int> b(m - 1);
    for (int i = 0; i < n - 1; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < m - 1; i++)
    {
      cin >> b[i];
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    int count = solve(n, m, a, b);

    cout << count;
  }
}
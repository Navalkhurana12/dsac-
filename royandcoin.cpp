#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int m;
  cin >> m;
  vector<int> f(n + 1, 0);
  vector<int> l(n + 1, 0);
  vector<int> r(n + 1, 0);
  for (int i = 0; i < m; i++)
  {
    int L, R;
    cin >> L >> R;
    l[L]++;
    r[R]++;
  }
  f[1] = l[1];
}
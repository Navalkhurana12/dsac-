#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int f(vector<int> arr)
{
  int n = arr.size();
  int np = 0, nn = 0, nz = 0;
  int minpositve = *min_element(arr.begin(), arr.end());
  int pos = 1, neg = 1;
  int maxneg = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
      nz++;
    else if (arr[i] > 0)
    {

      pos *= arr[i];
      np++;
    }
    else
    {
      maxneg = max(maxneg, arr[i]);
      nn++;
      neg *= arr[i];
    }
  }
  int product = 1;
  if (nz > 0)
    return 0;
  if (nn == 0)
    return minpositve;
  if (nn != 0)
  {
    if (nn % 2 != 0)
    {
      return neg * pos;
    }
    else
    {
      return (neg * pos) / maxneg;
    }
  }
}

int main()
{
  vector<int> arr;
  arr = {-1, 2, 4, -5, -1, 6};
  cout << f(arr);
}
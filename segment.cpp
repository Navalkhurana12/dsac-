#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int> st;
void buildtree(int idx, int lo, int hi, int arr[])
{
  if (lo == hi)
  {
    st[idx] = lo;
    return;
  }
  int mid = (lo + hi) / 2;
  buildtree(2 * idx + 1, lo, mid, arr);
  buildtree(2 * idx + 2, mid + 1, hi, arr);
  st[idx] = max(st[2 * idx + 1], st[2 * idx + 2]);
}
int getmax(int i, int lo, int hi, int l, int r)
{
  if (l > hi || r < lo)
    return INT_MIN;
  if (l <= lo && r >= hi)
    return st[i];
  int mid = (lo + hi) / 2;
  int lefttree = getmax(2 * i + 1, lo, mid, l, r);
  int righttree = getmax(2 * i + 2, mid + 1, hi, l, r);
  return max(lefttree, righttree);
}
int main()
{
  int arr[] = {12, 2, 3, 4, 76, 23, 98, 56};
  int n = sizeof(arr) / sizeof(arr[0]);
  st.resize(4 * n);
  buildtree(0, 0, n - 1, arr);
  int l, r;
  cout << "enter the range ";
  cin >> l >> r;
  cout << getmax(0, 0, n - 1, l, r);
}
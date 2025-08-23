#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> st;

void buildtree(int idx, int lo, int hi, int arr[])
{
  if (lo == hi)
  {
    st[idx] = arr[lo]; // Fix: store value, not index
    return;
  }
  int mid = (lo + hi) / 2;
  buildtree(2 * idx + 1, lo, mid, arr);
  buildtree(2 * idx + 2, mid + 1, hi, arr);
  st[idx] = st[2 * idx + 1] + st[2 * idx + 2];
}

int getsum(int i, int lo, int hi, int l, int r)
{
  // No overlap
  if (r < lo || l > hi)
    return 0;

  // Complete overlap
  if (lo >= l && hi <= r)
    return st[i];

  // Partial overlap
  int mid = (lo + hi) / 2;
  int lefttree = getsum(2 * i + 1, lo, mid, l, r);
  int righttree = getsum(2 * i + 2, mid + 1, hi, l, r);
  return lefttree + righttree;
}

int main()
{
  int arr[] = {12, 2, 3, 4, 76, 23, 98, 56};
  int n = sizeof(arr) / sizeof(arr[0]);
  st.resize(4 * n); // safe size for segment tree
  buildtree(0, 0, n - 1, arr);

  int l, r;
  cout << "Enter the range (0-based indexing): ";
  cin >> l >> r;

  if (l < 0 || r >= n || l > r)
  {
    cout << "Invalid range!" << endl;
  }
  else
  {
    cout << "sum is [" << l << ", " << r << "] is: ";
    cout << getsum(0, 0, n - 1, l, r) << endl;
  }

  return 0;
}

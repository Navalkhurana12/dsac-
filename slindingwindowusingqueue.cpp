#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
  int arr[] = {3, -4, -7, 30, 7, -9, 2, 1, 6, -1};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 3;
  queue<int> q;
  for (int i = 0; i < n - k + 1; i++)
  {
    if (arr[i] < 0)
      q.push(i);
  }
  vector<int> ans;
  int j = 0;
  while (j <= n - k)
  {
    while (q.size() > 0 && j > q.front())
      q.pop();
    if (j + k <= q.front() || q.size() == 0)
      ans.push_back(0);
    else
    {
      ans.push_back(arr[q.front()]);
    }
    j++;
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}
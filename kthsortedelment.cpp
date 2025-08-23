#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
  int arr[] = {6, 5, 3, 2, 8, 10, 7};
  int k = 4;
  int n = sizeof(arr) / sizeof(arr[0]);
  priority_queue<int, vector<int>, greater<int>> pq;
  vector<int> result;
  for (int i = 0; i < n; i++)
  {
    pq.push(arr[i]);
    if (pq.size() >= k)
    {
      result.push_back(pq.top());
      pq.pop();
    }
  }
  while (pq.size() > 0)
  {
    result.push_back(pq.top());
    pq.pop();
  }
  for (int i = 0; i < n; i++)
  {
    cout << result[i] << " ";
  }
}
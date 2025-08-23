#include <iostream>
#include <queue>
using namespace std;
int main()
{
  int arr[] = {23, 5, 234, 2678, 32, 90, 230};
  int n = sizeof(arr) / sizeof(arr[0]);
  int k = 2;
  priority_queue<int> pq;
  for (int i = 0; i < n; i++)
  {
    pq.push(arr[i]);
    if (pq.size() > k)
      pq.pop();
  }
  cout << pq.top();
}
#include <iostream>
#include <queue>
using namespace std;
int main()
{
  int arr[] = {2, 7, 4, 1, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int ele : arr)
  {
    pq.push(ele);
  }
  while (pq.size() > 0)
  {
    int x = pq.top();
    pq.pop();
    int y = pq.top();
    pq.pop();
    pq.push(x + y);
  }
  cout << pq.top();
}

#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  int k = 2;
  stack<int> st;
  for (int i = 0; i < k; i++)
  {
    st.push(q.front());
    q.pop();
  }
  while (!st.empty())
  {
    q.push(st.top());
    st.pop();
  }
  for (int i = 0; i < q.size() - k; i++)
  {
    int x = q.front();
    q.pop();
    q.push(x);
  }
  for (int i = 0; i < q.size(); i++)
  {
    int x = q.front();
    q.pop();
    cout << x << " ";
    q.push(x);
  }
}
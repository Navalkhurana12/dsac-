#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue<int> q)
{
  while (q.size() > 0)
  {
    cout << q.front() << " ";
    q.pop();
  }
}
int main()
{
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8);
  stack<int> s;
  int n = (q.size());
  for (int i = 0; i < n / 2; i++)
  {
    s.push(q.front());
    q.pop();
  }
  while (!s.empty())
  {
    q.push(s.top());
    s.pop();
  }
  for (int i = 0; i < n / 2; i++)
  {
    s.push(q.front());
    q.pop();
  }
  while (!s.empty())
  {
    q.push(s.top());
    s.pop();
    s.push(q.front());

    q.push(s.top());
    s.pop();
    q.pop();
  }
  for (int i = 0; i < n; i++)
  {
    s.push(q.front());
    q.pop();
  }
  while (!s.empty())
  {
    q.push(s.top());
    s.pop();
  }
  display(q);
}
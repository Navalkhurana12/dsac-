#include <iostream>
#include <stack>
using namespace std;
int prio(char k)
{
  if (k == '*' || k == '/')
    return 2;
  else
    return 1;
}
int operation(int val1, int val2, char ch)
{
  if (ch == '+')
    return val1 + val2;
  if (ch == '-')
    return val1 - val2;
  if (ch == '*')
    return val1 * val2;
  if (ch == '/')
    return val1 / val2;
}
int main()
{
  string s = "7+9*4/8-3";
  stack<int> num;
  stack<char> op;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] >= 48 && s[i] <= 57)
    {
      num.push(s[i] - 48);
    }
    else
    {
      while (op.size() > 0 && prio(s[i]) <= prio(op.top()))
      {
        int val2 = num.top();
        num.pop();
        int val1 = num.top();
        num.pop();
        char k = op.top();
        op.pop();
        int ans = operation(val1, val2, k);
        num.push(ans);
      }
      op.push(s[i]);
    }
  }
  while (op.size() > 0)
  {
    int val2 = num.top();
    num.pop();
    int val1 = num.top();
    num.pop();
    char k = op.top();
    int ans = operation(val1, val2, k);
    op.pop();
    num.push(ans);
  }
  cout << num.top();
}
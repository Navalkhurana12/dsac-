#include <iostream>
#include <climits>
#include <string>
using namespace std;
int btd(string &b)
{
  int n = b.size();
  int r = 0;
  for (int i = 0; i < n; i++)
  {
    char ch = b[n - 1 - i];
    int num = ch - '0';
    r = r + num * (1 << i);
  }
  return r;
}
int main()
{
  string str = "1000";
  cout << btd(str);
}

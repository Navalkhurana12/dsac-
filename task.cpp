#include <bits/stdc++.h>
using namespace std;
bool isvowel(char c)
{
  if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    return true;
  return false;
}
int main()
{
  string s;
  cin >> s;

  string ans = "";
  for (int i = 0; i < s.size(); i++)
  {
    if (isvowel(s[i]))
      continue;
    else if (isupper(s[i]))
    {
      ans += '.';
      ans += tolower(s[i]);
    }
    else
    {
      ans += '.';
      ans += s[i];
    }
  }
  cout << ans;
}
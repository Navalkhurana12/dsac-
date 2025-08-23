#include <iostream>
#include <unordered_set>
using namespace std;
void permutation(string &str, int i)
{
  if (i == str.size() - 1)
  {
    cout << str << endl;
    return;
  }
  unordered_set<char> st;
  for (int idx = i; idx < str.size(); idx++)
  {
    if (st.count(str[idx]))
      continue;
    st.insert(str[i]);
    swap(str[i], str[idx]);
    permutation(str, i + 1);
    swap(str[i], str[idx]);
  }
}
int main()
{
  string s;
  cin >> s;
  permutation(s, 0);
  return 0;
}
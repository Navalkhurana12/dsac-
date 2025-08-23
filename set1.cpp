#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
  unordered_set<int> s;

  s.insert(24);
  s.insert(237);
  s.insert(42);
  s.insert(278);
  s.insert(90);
  s.erase(78);
  for (int ele : s)
  {
    cout << ele << " ";
  }
  if (s.find(27) != s.end())
  {
    cout << "esits" << " ";
  }
  else
    cout << "no exists" << " ";
}
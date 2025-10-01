#include <bits/stdc++.h>
using namespace std;
static bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
  double r1 = double(p1.second) / double(p1.first);
  double r2 = double(p2.second) / double(p2.first);
  return r1 > r2;
}
double knap(vector<int> &weight, vector<int> &value, int capacity)
{
  int n = weight.size();
  vector<pair<int, int>> store(n);
  for (int i = 0; i < n; i++)
  {
    store.push_back({weight[i], value[i]});
  }
  sort(store.begin(), store.end(), cmp);
  double result = 0.0;
  int i = 0;
  while (capacity && i < n)
  {
    if (capacity >= store[i].first)
    {
      capacity -= store[i].first;
      result += double(store[i].second);
    }
    else
    {
      result += double(store[i].second) * (double(capacity) / double(store[i].first));
    }
  }
  cout << result;
}
int main()
{
  int n;
  cin >> n;
  cout << "enter the size of weight and value array";
  vector<int> weight(n);
  vector<int> value(n);
  for (int i = 0; i < n; i++)
  {
    cin >> weight[i];
    cin >> value[i];
  }
  int capacity;
  cout << "enter the capacity of bag";
  cin >> capacity;
  knap(weight, value, capacity);
}

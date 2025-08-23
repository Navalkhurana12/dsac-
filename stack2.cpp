#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
  int arr[] = {100, 80, 60, 81, 70, 81, 100};
  vector<int> pge;
  stack<int> st;
  pge.push_back(-1);
  st.push(0);
  for (int i = 1; i < 7; i++)
  {
    while (st.size() > 0 && arr[st.top()] < arr[i])
      st.pop();
    if (st.size() == 0)
    {
      pge.push_back(-1);
    }
    else
    {
      pge.push_back(st.top());
    }
    st.push(i);
  }
  for (int i = 0; i < pge.size(); i++)
  {
    cout << i - pge[i] << " ";
  }
}
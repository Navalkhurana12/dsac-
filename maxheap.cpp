#include <iostream>
using namespace std;
class maxheap
{
public:
  int arr[50];
  int idx;
  maxheap()
  {
    idx = 1;
  }
  void push(int x)
  {
    int i = idx;
    arr[i] = x;
    idx++;
    while (i > 1)
    {
      int parent = i / 2;
      if (arr[i] > arr[parent])
      {
        swap(arr[i], arr[parent]);
        i--;
      }
      else
      {
        break;
      }
    }
  }
  int pop()
  {
    int ele = arr[1];
    arr[1] = arr[idx - 1];
    idx--;
    int i = 1;
    while (true)
    {
      int left = 2 * i, right = 2 * 1 + 1;
      int largest = i;
      if (left < idx && arr[left] > arr[largest])
      {
        largest = left;
      }
      if (right < idx && arr[right] > arr[largest])
      {
        largest = right;
      }
      if (largest != i)
      {
        swap(arr[i], arr[largest]);
      }
      else
      {
        break;
      }
    }
    return ele;
  }
  int size()
  {
    cout << "size is" << idx - 1 << endl;
  }
  int top()
  {
    cout << arr[1] << endl;
  }
  void dispaly()
  {
    for (int i = 1; i <= idx - 1; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};
int main()
{
  maxheap mp;
  mp.push(12);
  mp.push(54);
  mp.push(78);
  mp.push(67);
  mp.dispaly();
  mp.top();
}
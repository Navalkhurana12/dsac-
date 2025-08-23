#include <iostream>
using namespace std;
class minheap
{
public:
  int arr[50];
  int idx;
  minheap()
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
      if (arr[parent] < x)
      {
        break;
      }
      else
      {
        swap(arr[parent], arr[i]);
        i = parent;
      }
    }
  }
  int size()
  {
    cout << idx - 1 << endl;
  }
  int pop()
  {
    int x = arr[1];
    arr[1] = arr[idx - 1];
    idx--;
    int i = 1;
    while (true)
    {
      int left = 2 * i, right = 2 * i + 1;
      int smallest = i; // Assume current node is the smallest

      if (left < idx && arr[left] < arr[smallest])
        smallest = left;
      if (right < idx && arr[right] < arr[smallest])
        smallest = right;

      if (smallest != i)
      {
        swap(arr[i], arr[smallest]);
        i = smallest; // Move down to the smallest child
      }
      else
      {
        break;
      }

      return x;
    }
  }
  void display()
  {

    for (int i = 1; i < idx; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};
int main()
{
  minheap mp;
  mp.push(12);
  mp.push(87);
  mp.push(80);
  mp.push(90);
  mp.push(3);
  mp.display();
  mp.pop();
  mp.size();
  mp.display();
}
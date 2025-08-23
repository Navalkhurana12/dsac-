#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
class node
{
public:
  int val;
  node *left;
  node *right;
  node(int val)
  {
    this->val = val;
    left = NULL;
    right = NULL;
  }
  void find(node *a, int k, int level)
  {
    if (a == NULL)
      return;
    if (level == k)
      ans.push_back(a->val);
    find(a->left, k + 1, level);
    find(a->right, k + 1, level);
  }
};
int main()
{
  node *a = new node(10);
  node *b = new node(12);
  node *c = new node(19);
  node *d = new node(34);
  node *e = new node(45);
  node *f = new node(67);
  node *g = new node(56);
  node *i = new node(90);
  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->left = f;
  c->right = g;
  d->left = i;
  int k = 2;
  a->find(a, 1, k);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}

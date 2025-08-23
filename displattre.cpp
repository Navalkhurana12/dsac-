#include <iostream>
#include <climits>
using namespace std;
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
  void display(node *a)
  {
    if (a == NULL)
      return;
    cout << a->val << " ";
    display(a->left);
    display(a->right);
  }
  int suum(node *root, int &sum)
  {
    if (root == NULL)
      return 0;
    sum += root->val;
    suum(root->left, sum);
    suum(root->right, sum);
    return sum;
  }
  int size(node *root)
  {
    if (root == NULL)
      return 0;
    return 1 + size(root->left) + size(root->right);
  }
  int maxin(node *root)
  {
    if (root == NULL)
      return 0;
    int lmax = maxin(root->left);
    int rmax = maxin(root->right);
    return max(root->val, max(lmax, rmax));
  }
  int level(node *root)
  {
    if (root == NULL)
      return 0;
    return 1 + max(level(root->left), level(root->right));
  }
};

int main()
{
  node a(10);
  node b(11);
  node c(101);
  node d(161);
  node e(19);
  node f(1);
  node g(181);
  node h(111);
  a.left = &b;
  a.right = &c;
  b.left = &d;
  b.right = &e;
  c.left = &f;
  c.right = &g;
  d.right = &h;

  a.display(&a);
  cout << endl;
  int total = 0;
  cout << a.suum(&a, total);
  cout << endl;
  cout << a.size(&a);
  cout << endl;
  cout << a.maxin(&a);
  cout << endl;
  cout << a.level(&a);

  // node *a = new node(10);
  // node *b = new node(11);
  // node *c = new node(100);
  // node *d = new node(23);
  // node *e = new node(100);
  // node *f = new node(203);
  // node *g = new node(10);
  // node *h = new node(230);
  // a->left = b;
  // a->right = c;
  // b->left = d;
  // b->right = e;
  // c->left = f;
  // c->right = g;
  // d->right = h;
  // a->display(a);
}
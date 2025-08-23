#include <iostream>
#include <climits>
#include <algorithm>
#include <queue>
#include <stack>
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
  void display(node *root)
  {
    if (root == NULL)
      return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
  }
  int size(node *root)
  {
    if (root == NULL)
      return 0;
    return 1 + size(root->left) + size(root->right);
  }
  int maxintree(node *root)
  {
    if (root == NULL)
      return INT_MIN;
    return max(root->val, max(maxintree(root->left), maxintree(root->right)));
  }
  int pro(node *root)
  {
    if (root == NULL)
      return 1;
    return root->val * (pro(root->left)) * pro(root->right);
  }
  int height(node *root)
  {
    if (root == NULL)
    {
      return 0;
    }
    return 1 + max(height(root->left), height(root->right));
  }
  void nthlevel(node *root, int curr, int level)
  {
    if (root == NULL)
      return;
    if (curr == level)
      cout << root->val << " ";
    nthlevel(root->left, curr + 1, level);
    nthlevel(root->right, curr + 1, level);
  }
  void level(node *root, int n)
  {
    for (int i = 1; i <= n; i++)
    {
      nthlevel(root, 1, i);
      cout << endl;
    }
  }
  void preoi(node *root, vector<int> &ans)
  {
    stack<node *> st;
    st.push(root);
    while (!st.empty())
    {
      node *temp = st.top();
      st.pop();
      if (temp->right != NULL)
        st.push(temp->right);
      if (temp->left != NULL)
        st.push(temp->left);
      ans.push_back(temp->val);
    }
  }

  void lotq(node *root, queue<node *> q)
  {
    q.push(root);
    while (!q.empty())
    {
      if (q.front()->left != NULL)
        q.push(q.front()->left);
      if (q.front()->right != NULL)
        q.push(q.front()->right);
      cout << q.front()->val << " ";
      q.pop();
    }
  }
};
int main()
{
  node *a = new node(2);
  node *b = new node(12);
  node *c = new node(13);
  node *d = new node(12);
  node *e = new node(24);
  node *f = new node(26);
  a->left = b;
  a->right = c;
  b->left = d;
  b->right = e;
  c->left = f;

  node *bj;
  // cout << bj->size(a);
  // cout << endl;
  // cout << bj->maxintree(a);
  // cout << endl;
  // cout << bj->pro(a);
  // cout << endl;
  // cout << bj->height(a);
  // bj->nthlevel(a, 1, 2);
  // int n = bj->height(a);
  // // bj->level(a, n);
  queue<node *> q;
  cout << endl;
  bj->lotq(a, q);
  cout << endl;
  vector<int> ans;

  bj->preoi(a, ans);
  cout << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{//my logic
  vector<int> a = {1, 4, 2, 17, 9, 12};
  int n = a.size();
  int pos = n - 1;
  stack<int> s;
  vector<int> ans(n);
  for (int i = n - 1; i >= 0; i--)
  {
    if (s.empty())
    {
      ans[pos--] = -1;
      s.push(a.at(i));
    }
    else if (a.at(i) < s.top())
    {
      ans[pos--] = s.top();
      s.push(a.at(i));
    }
    else if (a.at(i) > s.top())
    {
      s.pop();
      while (!s.empty() && a.at(i) > s.top())
        s.pop();
      if (s.empty())
        ans[pos--] = -1;
      else
        ans[pos--] = s.top();
      s.push(a.at(i));
    }
  }
  for (int elem : ans)
    cout << elem << " ";
}
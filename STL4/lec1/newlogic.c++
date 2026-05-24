#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {1, 4, 2, 17, 9, 12};
  int n = nums.size();
  int pos = n - 1;
  stack<int> s;
  vector<int> ans(n);
  for (int i = n - 1; i >= 0; i--)
  {
    while (!s.empty() && nums.at(i) > s.top())
      s.pop();
    if (s.empty())
      ans[pos--] = -1;
    else
      ans[pos--] = s.top();
    s.push(nums.at(i));
  }
  for (int elem : ans)
    cout << elem << " ";
}
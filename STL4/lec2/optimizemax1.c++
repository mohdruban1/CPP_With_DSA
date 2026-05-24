#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {1, 0, 0, 1, 0, 1, 0, 1, 0};
  int k = 2, windo_len = 0, start = 0, end = 0, ans = 0, Zero = 0;
  while (end < nums.size())
  {
    if (nums.at(end) == 0)
      Zero++;
    // window Shrinking
    while (Zero > k)
    {
      if (nums.at(start) == 0)
        Zero--;
      start++;
    }
    windo_len = end - start + 1;
    ans = max(ans, windo_len);
    //window expantion
    end++;
  }
  cout << ans;
}
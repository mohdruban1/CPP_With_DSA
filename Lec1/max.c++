#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {1, 1, 0, 1, 1, 1};
  int maxcount = 0, currencount = 0;
  for (int x : nums)
  {
    if (x == 1)
      maxcount = max(maxcount, ++currencount);
    else
      currencount = 0;
  }
  cout << maxcount << endl;
}
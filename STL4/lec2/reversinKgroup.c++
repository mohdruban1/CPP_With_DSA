#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11};
  int k = 3, start = 0, end = k, S;
  while (end < nums.size())
  {
    cout << start << " " << end << endl;
    reverse(nums.begin() + start, nums.begin() + end);
    start += k;
    end += k;
  }
  reverse(nums.begin() + start, nums.begin() + nums.size());
  for (int elem : nums)
    cout << elem << " ";
}
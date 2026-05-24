#include <bits/stdc++.h>
using namespace std;
int main()
{ // array must be sorted
  int a[] = {2, 5, 7, 8, 10, 12, 15}, sum = 0, target_sum = 17, flag = 0;
  int n = sizeof(a) / sizeof(a[0]);
  int left = 0, right = n - 1;
  vector<pair<int, int>> ans;
  pair<int, int> p;
  while (left < right)
  {
    sum = a[left] + a[right];
    if (sum < target_sum)
      left++;
    else if (sum > target_sum)
      right--;
    else
    {
      flag = 1;
      // cout << a[left] << " + " << a[right] << endl;
      p = {a[left], a[right]};
      ans.push_back(p);
      // for all possiblr pair
      left++;
      right--;
      // break;
    }
  }
  int a1, b1;
  for (auto elem : ans)
  {
    tie(a1, b1) = elem;
    cout << "(" << a1 << "," << b1 << ")" << endl;
  }
  if (flag == 0)
    cout << "No pair exist";
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v = {14, 15, 20, 30, 31, 45};
  int lowerBound = 10, upperBound = 50;
  int count = v.size();
  vector<vector<int>> ans;
  if (lowerBound < v[0])
    ans.push_back({lowerBound, v[0] - 1});
  for (int i = 0; i < count - 1; i++)
  {
    if (v[i + 1] > v[i] + 1)
      ans.push_back({v[i] + 1, v[i + 1] - 1});
  }
  if (upperBound > v[count - 1])
    ans.push_back({v[count - 1] + 1, upperBound});
  for (auto elem : ans)
    cout << "[ " << elem[0] << " " << elem[1] << "]" << endl;
  return 0;
}
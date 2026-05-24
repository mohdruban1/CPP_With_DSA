#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v = {14, 15, 20, 30, 31, 45};
  int lowerBound = 10, upperBound = 50;
  int count = v.size();
  vector<pair<int, int>> ans(5);
  for (int i = 0; i < count; i++)
  {
    ans[i].first = lowerBound;
    while (v[i] >= lowerBound)
    {
      if (v[i] == lowerBound)
      {
        lowerBound++;
        continue;
      }
      ans[i].second = lowerBound++;
    }
  }
  for (int i = 0; i < 5; i++)
    cout << ans[i].first << " " << ans[i].second << endl;
  return 0;
}
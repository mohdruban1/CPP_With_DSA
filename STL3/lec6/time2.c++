#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
  vector<pair<int, int>> intervals = {{2, 4}, {1, 5}, {4, 6}, {7, 8}};
  sort(intervals.begin(), intervals.end());
  vector<pair<int, int>> mergedIntervals;
  pair<int, int> prevIntervals = intervals[0];
  int n = intervals.size();
  mergedIntervals.push_back(prevIntervals);
  for (int i = 1; i < n; i++)
  {
    if (mergedIntervals.back().second >= intervals[i].first)
    {
      // overlapping
      mergedIntervals.back().second = max(mergedIntervals.back().second, intervals[i].second);
    }
    else
    {
      // non overlapping
      mergedIntervals.push_back(intervals[i]);
    }
  }
  for (auto elem : mergedIntervals)
    cout << "( " << elem.first << " " << elem.second << " )" << endl;
}
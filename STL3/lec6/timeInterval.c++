#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
  // you are given an array  of time intervels every element is a vector of two element ai:{start,end}
  // you have to merge all the overlapping intervals into one and output the final set of intervals that should have only the non overlapping in it
  // ex {{2,4},{1,5}{4,6},{7,8}}
  // o/p {{1,6},{7,8}}
  vector<pair<int, int>> intervals = {{2, 4}, {1, 5}, {4, 6}, {7, 8}};
  sort(intervals.begin(), intervals.end());
  vector<pair<int, int>> mergedIntervals;
  pair<int, int> prevIntervals = intervals[0];
  int n = intervals.size();
  for (int i = 1; i < n; i++)
  {
    if (prevIntervals.second >= intervals[i].first)
    {
      // overlapping
      prevIntervals.second = max(prevIntervals.second, intervals[i].second);
    }
    else
    {
      // non overlapping
      mergedIntervals.push_back(prevIntervals);
      prevIntervals = intervals[i];
    }
  }
  mergedIntervals.push_back(prevIntervals);
  for (auto elem : mergedIntervals)
    cout << "( " << elem.first << " " << elem.second << " )" << endl;
}
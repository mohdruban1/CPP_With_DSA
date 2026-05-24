#include <bits/stdc++.h>
using namespace std;
int main()
{
  // find maximum diff between two no
  vector<int> a = {2, 3, 10, 6, 8, 1};
  int maxdiff = 0, diff = 0, maxe = a[0], mine = a[0];
  auto it = a.begin();
  advance(it, 1);
  while (it < a.end())
  {
    maxe = max(maxe, *it);
    mine = min(mine, *it++);
    cout << maxe << " " << mine << "\n";
  }
  diff = maxe - mine;
  cout << diff;
}
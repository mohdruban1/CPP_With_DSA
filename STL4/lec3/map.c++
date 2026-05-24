#include <bits/stdc++.h>
using namespace std;
int main()
{
  map<int, string> m = {{1, "A"}, {2, "B"}, {3, "C"}, {7, "R"}};
  // cout << m.at(1); // acces ussing key
  m.insert({4, "D"}); // take first one to be initialize and ignore them
  m.insert({4, "g"});
  for (auto elem : m)
  {
    cout << elem.first << " " << elem.second << endl;
  }
  auto it = m.lower_bound(4); // give >= value
  cout << "lower bound is " << it->first << " " << it->second << endl;

  auto it1 = m.upper_bound(5); // give > value
  cout << "upperbound is " << it1->first << " " << it1->second << endl;
  cout << distance(m.begin(), it1) << endl;
  cout << distance(it1, m.end());
}
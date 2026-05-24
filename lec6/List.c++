#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> a = {5, 8, 3, 4};
  // cout << a.front() << endl;
  // cout << a.back() << endl;
  // a.front() = 10;
  // a.back() = 7;
  // cout << a.front() << endl;
  // cout << a.back() << endl;
  auto it = a.begin();
  advance(it, 2);
  a.insert(it, 3, 20);
  for (auto it1 = a.begin(); it1 != a.end(); it1++)
    cout << *it1 << endl;
}
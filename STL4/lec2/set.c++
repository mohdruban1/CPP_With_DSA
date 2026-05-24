#include <bits/stdc++.h>
using namespace std;
int main()
{
  unordered_set<int> s;
  s.insert(5);
  s.insert(10);
  s.insert(7);
  s.insert(6);
  for (int elem : s)
    cout << elem << endl;
}
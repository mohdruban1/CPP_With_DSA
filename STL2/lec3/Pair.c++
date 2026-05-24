#include <bits/stdc++.h>
using namespace std;
int main()
{
  /*  pair<int, string> P1 = make_pair(1, "AJ");
    // or
    pair<int, string> P2 = {2, "Naman"};
    cout << P1.first << " " << P1.second << endl;
    cout << P2.first << " " << P2.second << endl;
    P2.second = "Divyansh";
    cout << P2.first << " " << P2.second << endl;*/
  pair<int, int> p1 = {2, 4};
  pair<int, int> p2 = {2, 6};
  pair<int, int> p3 = {1, 4};
  // cout << (p1 == p2) << endl;
  // pair unpack
  int v1, v2;
  tie(v1, v2) = p1;
  cout << v1 << " " << v2 << endl;
  return 0;
}
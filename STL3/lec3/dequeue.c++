#include <bits/stdc++.h>
using namespace std;
int main()
{
  deque<int> dq;
  dq.push_back(10);
  dq.push_back(20);
  cout << dq.at(1) << endl;
  for (int a : dq)
    cout << a << endl;
}
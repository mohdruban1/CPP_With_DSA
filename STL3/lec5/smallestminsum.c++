#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
  priority_queue<int, vector<int>, greater<int>> pq;
  vector<int> a = {3, 4, 5, 8, 6, 2, 9, 1, 7};
  int n = a.size();
  string s1 = "", s2 = "";
  for (int elem : a)
    pq.push(elem);
  for (int i = 0; !pq.empty(); i++)
  {
    if (i % 2 == 0)
      s1 += to_string(pq.top());
    else
      s2 += to_string(pq.top());
    pq.pop();
  }
  cout << s1 << " " << s2 << endl;
  cout << " min sum is : " << stoi(s1) + stoi(s2);
}
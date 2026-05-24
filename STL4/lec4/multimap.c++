#include <bits/stdc++.h>
using namespace std;
int main()
{
  multimap<int, string> mm = {{1, "AJ"}, {1, "Ad"}, {2, "R"}, {3, "e"}};

  for (auto elem : mm)
    cout << elem.first << " " << elem.second << endl;
  auto it = mm.begin();
  auto it1 = next(it, 3);
  it1->second = "karan";
  while (it != mm.end())
  {
    cout << it->first << " " << it->second << endl;
    it++;
  }

  auto iit = mm.find(2);
  cout << iit->second << endl;
}
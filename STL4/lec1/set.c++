#include <bits/stdc++.h>
using namespace std;
int main()
{
  /* set<string> names = {"AJ", "ST", "DK", "MR"};
   names.insert("AJ"); // ignore duplicate
   names.insert("aj");
   cout << names.size() << endl;
   auto it = names.begin();
   cout << *it << endl;
   auto it1 = next(it, 3);
   cout << *it1 << endl;

   // while (it != names.end())
      // cout << *it++ << endl;
   for (int i = 0; i < names.size(); i++)
   {
     cout << *next(it, i) << "," << endl;
   }

   set<int> s1 = {4, 5, 3, 7, 6};
   s1.erase(6);
   for (int elem : s1)
     cout << elem << " ";
   cout << "\n";
   */
  set<int, greater<int>> s2 = {4, 5, 3, 7, 6};
  s2.erase(next(s2.begin(),1));//delete element at specific position
  for (int elem : s2)
    cout << elem << " ";
  auto it2 = s2.find(4);
  if (it2 != s2.end())
    cout << "found " << *it2 << endl;
  else
    cout << "not found";
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  int r = sizeof(a) / sizeof(a[0]);
  int c = sizeof(a[0]) / sizeof(a[0][0]);
  vector<int> res;
  int left = 0, right = c - 1, top = 0, bottom = r - 1;
  while (top <= bottom && left <= right)
  {
    // move right
    for (int i = left; i <= right; i++)
    {
      res.push_back(a[top][i]);
    }
    top++;
    // move down
    for (int i = top; i <= bottom; i++)
      res.push_back(a[i][right]);
    right--;
    // move left
    if (top <= bottom)
    {
      for (int i = right; i >= left; i--)
        res.push_back(a[bottom][i]);
    }
    bottom--;
    // move up
    if (left <= right)
    {
      for (int i = bottom; i >= top; i--)
        res.push_back(a[i][left]);
    }  
    left++;
  }
  for (int elem : res)
    cout << elem << " ";
}
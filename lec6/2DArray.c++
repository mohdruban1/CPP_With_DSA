#include <iostream>
using namespace std;
int main()
{
  int a[2][3] = {{4, 5, 2},
                 {6, 8, 1}};
  int n = sizeof(a) / sizeof(a[0]);
  int m = sizeof(a[0]) / sizeof(a[0][0]);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << *(*(a + i) + j) << "\t";
    }
    cout << endl;
  }
  return 0;
}

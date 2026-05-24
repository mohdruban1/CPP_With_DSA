#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s = "Aditya jain";
  int count = 0, countVowels = 0, countConsonant = 0;
  for (char c : s)
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
      count++;
  for (int i = 0; i < count; i++)
  {
    if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u' || s.at(i) == 'A' || s.at(i) == 'E' || s.at(i) == 'I' || s.at(i) == 'O' || s.at(i) == 'U')
    {
      countVowels++;
    }
  }
  countConsonant = count - countVowels;
  cout << "no of vowels is : " << countVowels << endl;
  cout << "no of consonent is " << countConsonant << endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Car
{
private:
  /* data */
public:
  string brand;
  string color;
  int seats;
  Car()
  {
    cout << "It is default contructor" << endl;
  }
  Car(string b, string c)
  {
    brand = b;
    color = c;
  }
  Car(string b, string c, int s)
  {
    brand = b;
    color = c;
    seats = s;
  }
};
int main()
{
  Car c1("mercedese", "black", 5);
  cout << "color is " << c1.color <<endl;
  Car c2;
}

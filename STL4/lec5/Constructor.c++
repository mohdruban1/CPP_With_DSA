#include <bits/stdc++.h>
using namespace std;
class Car
{
public:
  // features or attribute
  string brand;
  string color;
  string type;
  int seats;
  // constructor with parameters
  Car(string b, string c, string t, int s=6)
  {
    brand = b;
    color = c;
    type = t;
    seats = s;
  }
};

int main()
{
  Car c1("Toyota", "white", "manuals",7);
  Car c2("maruti", "black", "auto", 5);
  cout << c1.brand << " " << c1.color << " " << c1.seats << " " << c1.type << endl;
  cout << c2.brand << " " << c2.color << " " << c2.seats << " " << c2.type << endl;
}
#include <bits/stdc++.h>
using namespace std;
class Car
{
private:
  // features or attribute
  string brand;
  string color;
  string type;
  int seats;

public:
  // constructor with parameters
  void setFeatures(string b, string c, string t, int s)
  {
    brand = b;
    color = c;
    type = t;
    seats = s;
  }
  string getBrand()
  {
    return brand;
  }
  string getColor()
  {
    return color;
  }
  string getType()
  {
    return type;
  }
  int getSeats()
  {
    return seats;
  }
};

int main()
{
  Car c1;
  c1.setFeatures("Toyota", "white", "manuals", 7);
  Car c2;
  c2.setFeatures("maruti", "black", "auto", 5);
  cout << c1.getBrand() << " " << c1.getColor() << " " << c1.getSeats() << " " << c1.getType() << endl;
  cout << c2.getBrand() << " " << c2.getColor() << " " << c2.getSeats() << " " << c2.getType() << endl;
}
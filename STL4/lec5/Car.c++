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
  void message()
  {
    cout << "hello" << endl;
  }
  void displayColor();
};
// constructor without parameters
Car()
{
  cout << "car object created" << endl;
}
void Car::displayColor()
{
  cout << "color is this" << endl;
}
int main()
{
  Car c1;
  c1.brand = "Toyota";
  c1.color = "white";
  c1.seats = 7;
  c1.type = "manuals";
  c1.displayColor();
  Car c2;
  c2.brand = "maruti";
  c2.color = "black";
  c2.seats = 5;
  c2.type = "auto";
  cout << c1.brand << " " << c1.color << " " << c1.seats << " " << c1.type << endl;
  cout << c2.brand << " " << c2.color << " " << c2.seats << " " << c2.type << endl;
}
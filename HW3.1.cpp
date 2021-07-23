#include <iostream>
using namespace std;

class Figure
{
public:
  virtual void area ();
};

class Parallelogram:public Figure
{
public:
  Parallelogram ()
  {
    int h = 1;
    int c = 2;
    int areaP = h * c;
    cout << "Parallelogram" << areaP << endl;
  }
};
class Circle:public Figure
{
public:
  Circle ()
  {
    int r = 3;
    float pi = 3,14;
    float areaC = pi * (r * r);
    cout << "Circle" << areaC << endl;
  }
};
class Rectangle:public Parallelogram
{
public:
  Rectangle ()
  {
    int b = 2;
    int a = 3;
    int areaR = b * a;
    cout << "Rectangle" << areaR << endl;
  }
};
class Square:public Parallelogram
{
public:
  Square ()
  {
    int a1 = 2;
    int areaS = a1 * a1;
      cout << "Square" << areaS << endl;
  }
};

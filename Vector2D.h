#ifndef Vector2D_H_
#define Vector2D_H_
#include <iostream>
#include <cmath>


using namespace std;

class Vector2D
{
 public:
  double x;
  double y;
  Vector2D();
  Vector2D(double in_x, double in_y);
};

Vector2D operator*(const Vector2D v1, const double d);
Vector2D operator/(const Vector2D v1, const double d);
ostream& operator<<(ostream& out, const Vector2D v1);


#endif

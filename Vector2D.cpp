#include <iostream>
#include <cmath>
#include "Vector2D.h"
using namespace std;

 //CREATING CLASS VECTOR2D//


  //Constructor 
Vector2D:: Vector2D()
  {
    x = 0.0;
    y = 0.0;
  }

Vector2D:: Vector2D(double in_x, double in_y)
  {
    x = in_x;
    y = in_y;
  }

  //Non-member overloaded operators
  Vector2D operator*(const Vector2D v1, const double d)
  {
    double x= v1.x * d;
    double y= v1.x * d;
    Vector2D npoint(x,y);
    return npoint;
  }

Vector2D operator/(const Vector2D v1, const double d)
  {
    double x= v1.x / d;
    double y= v1.y / d;
    Vector2D npoint (x,y);
    return npoint;
  }

ostream& operator<<(ostream& out, const Vector2D v1)
  {
     out <<"<"<< v1.x <<","<<v1.y<<">"<<endl;
     return out;
  }


 
  //ENDING CLASS VECTOR2D//

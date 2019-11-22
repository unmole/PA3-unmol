#include <iostream>
#include <cmath>
#include "Point2D.h"

using namespace std;

//CREATING CLASS POINT2D//

 //Constructor 
Point2D::Point2D()
  {
    x = 0.0;
    y = 0.0;
  }

Point2D::Point2D(double in_x, double in_y)
  {
    x = in_x;
    y = in_y;
  }

  //Non-member functions()
  double GetDistanceBetween(Point2D p1, Point2D p2)
  {
    double newx=p1.x - p2.x;
    double newy=p1.y - p2.y;
    double asq= newx * newx;
    double bsq= newy * newy;
    double result=sqrt(asq+bsq);
    return result;
  }

  //Non-member overloaded operators
ostream& operator<<(ostream& out, const Point2D p1)
  {
    out <<"("<< p1.x <<","<<p1.y<<")"<<endl;
    return out;
  }

  Point2D operator+(const Point2D p1,const Vector2D v1)
  {
    Point2D npoint2D;
    npoint2D.x= p1.x + v1.x;
    npoint2D.y= p1.y + v1.y;
    return npoint2D;
  }

    Vector2D operator-(const Point2D p1, const Point2D p2)
  {
    Vector2D nvector2D;
    nvector2D.x= p1.x-p2.x;
    nvector2D.y= p1.y-p1.y;
    return nvector2D;
  }
 
  //ENDING CLASS POINT2D//


#include <iostream>
#include <cmath>
#include <string>
#include "Point2D.h"
#include "Vector2D.h"
#include "GameObject.h"

using namespace std;

int main ()
{
  Point2D p1;
  cout << p1;

  Point2D p2 (5,7);
  cout <<p2;

  Vector2D v1;
  cout << v1;

  Vector2D v2(2,3);
  cout << v2;

  double d = 5;
  cout <<d<<endl;

  cout << v1;

  /*GameObject GO('A');
  
  GameObject GO(p2, 5, 'Z');*/

  cout << p2+v2;
  
  cout << p2-p1;
  
  double distance=GetDistanceBetween(p1, p2); 
  cout << distance << endl;

  cout << v2 * d;
  
  cout << v2 / d;

  /*cout << GO.GetLocation()<<endl;

  cout << GO.GetId() << endl;
  
  cout << GO.GetState()<< endl;

  cout << GO.ShowStatus() << endl;*/

  return 0;
}

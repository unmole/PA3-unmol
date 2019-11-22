#ifndef Building_H_
#define Builidng_H_
#include <iostream>
#include <cmath>
#include "Point2D.h"

using namespace std;

class Building : public GameObject
{
 private:
  unsigned int pokemon_count;
  Building();
  Building(char in_code, int in_id, Point2D in_loc);

 public:
  void AddOnePokemon();
  void RemoveOnePokemon();
  void ShowStatus();
  bool ShouldBeVisible();
};

#endif

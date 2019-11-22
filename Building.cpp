#include <iostream>
#include <cmath>
#include "Building.h"

using namespace std;

//CREATING CLASS BUILDING//   //Inheriting from GameObject

  //Constructor
Building::Building()
{
  pokemon_count=0;
    this-> display_code = 'B';
    cout <<"Building default constructed" <<endl;
  }
Building::Building( char in_code, int in_id, Point2D in_loc)
  {
    this-> id_num= in_id;
    this-> location= in_loc;
    this-> display_code=in_code;
    cout<< "Building Constructed"<<endl;
  }

  //Public Member Functions
void Building::AddOnePokemon()
  {
    this-> pokemon_count;
    pokemon_count++;
  }

void Building::RemoveOnePokemon()
  {
    this-> pokemon_count;
    pokemon_count--;
  }
  
void Building::ShowStatus()
  {
    if (pokemon_count == 1)
      {
	cout<< pokemon_count<< "pokemon is in this building" <<cout;
      }
    else 
      {
	cout<< pokemon_count<< "pokemon are in this building" <<cout;
      }
  }

bool Building::ShouldBeVisible()
  {
    return true;
  }



//ENDING CLASS BUILDING//

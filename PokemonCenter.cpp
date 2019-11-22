#include <iostream>
#include <cmath>
#include "PokemonCenter.h"

using namespace std;

//CREATING CLASS POKEMONCENTER

//Construct
PokemonCenter::PokemonCenter()
{
  this-> display_code='C';
  this-> stamina_capacity=100;
  this-> num_stamina_points_remaining=stamina_capacity;
  this-> dollar_cost_per_stamina_point=5;
  this-> state= STAMINA_POINTS_AVAILABLE;
  cout << "PokemonCenter default constructed" <<endl;
}
  
PokemonCenter::PokemonCenter(int in_id, double stamina_cost, unsigned int stamina_cap, Point2D in_loc)
{
  this-> id_num=in_id;
  this-> location = in_loc;
  this-> dollar_cost_per_stamina_point= stamina_cost;
  this-> stamina_capacity= stamina_cap;
  
  cout << "PokemonCenter constructed" <<endl;
  
  this-> state= STAMINA_POINTS_AVAILABLE;
}

//Public Member Functions

bool PokemonCenter::HasStaminapoints()
{
  if (num_stamina_points_remaining > 0)
    return true;
  else 
    return false;
}

unsigned int PokemonCenter::GetNumStaminaPointsRemaining()
{
  return num_stamina_points_remaining;
}

bool PokemonCenter::CanAffordStaminaPoints(unsigned int stamina_points, double budget)
{
  unsigned int tcost= stamina_points * 5;
  if (budget >= tcost)
    return true;
  else
    return false;
}

double PokemonCenter::GetDollarCost(unsigned int stamina_points)
{
  unsigned int cost;
  cost= stamina_points * 5;
  return cost;
}

unsigned int PokemonCenter::DistributeStamina(unsigned int points_needed)
{
  if (this-> num_stamina_points_remaining >= points_needed)
    {
      num_stamina_points_remaining= num_stamina_points_remaining - points_needed;
      return points_needed;
    }
  else
    {
      return num_stamina_points_remaining;
      num_stamina_points_remaining=0;
    }
}

bool PokemonCenter::Update()
{
   if (this-> num_stamina_points_remaining =0)
     {
       this->state= NO_STAMINA_POINTS_AVAILABLE;
       this->display_code= 'c';
       this->id_num;
       cout << "PokemonCenter" <<id_num<< "has ran out of stamina points" <<endl;
       return true;
     }
   else
     return false;
}

void PokemonCenter::ShowStatus()
{
  cout << "Pokemon Center Status: "<< Building::ShowStatus() <<endl;
  cout << "Pokemon dollars per stamina point: " << this->dollar_cost_per_stamina_point<< endl;
  cout << "has " << this->num_stamina_points_remaining << "stamina point(s) remaining " <<endl;
}



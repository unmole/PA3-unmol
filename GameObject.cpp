#include <iostream>
#include <cmath>
#include "GameObject.h"


using namespace std;

 //CREATING CLASS GAMEOBJECT//

 //Construct  
GameObject::GameObject(char in_code)
  {
    display_code = in_code;
    id_num = 1;
    state = 0;
    cout << "GameObject constructed"<<endl;
  }

GameObject::GameObject(Point2D in_loc, int in_id, char in_code)
  {
    display_code= in_code;
    id_num=in_id;
    location=in_loc;
    cout<< "GameObject constructed"<<endl;
    }   
  
//Public member functions
  Point2D GameObject::GetLocation()
  {
    return location;
  }

  int GameObject::GetId()
  {
    return id_num;
  }

  char GameObject::GetState()
  {
    return state;
  }

  void GameObject::ShowStatus()
  {
    std::cout << display_code << id_num << "at" << location <<endl;
  }


  //ENDING CLASS GAMEOBJECT//

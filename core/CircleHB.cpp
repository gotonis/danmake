#include "oxygine.h"
#include <cmath.h>
#include "Actor.h"
#include "Hitbox.h"
#include "CircleHB.h"

using namespace oxygine;


public int collidesWith(Hitbox other){
  if(typeid(*other).name()  == "CircleHB"){
    return sqrt((getX() - other.getX())^2 + (getY - other.getY())^2) < radius + other.getRadius();
  }
  return other.collidesWith(this);
}

public int collidesWith(CircleHB circle){
return sqrt((getX() - other.getX())^2 + (getY - other.getY())^2) < radius + other.getRadius();
}

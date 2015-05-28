#include <cmath.h>
#include "oxygine.h"
#include "Actor.h"

using namespace oxygine;

abstract class Hitbox: public Actor {

  public virtual void collidesWith(Hitbox other) = 0; 
  public virtual void collidesWith(CircleHB circle) = 0; //may make concrete

}

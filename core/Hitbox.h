#include <cmath.h>
#include "oxygine.h"
#include "Actor.h"

using namespace oxygine;

abstract class Hitbox: public Actor {

  public virtual void collidesWith(Hitbox other); 
  public virtual void collidesWith(CircleHB circle);

}

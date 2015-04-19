#include "oxygine.h"
#include <cmath.h>
#include "Actor.h"
#include "Hitbox.h"

using namespace oxygine;

class CircleHB: public Hitbox {

  protected float radius;
  public float getRadius();
  public int collidesWith(Hitbox other);
  public int collidesWith(CircleHB circle);

}

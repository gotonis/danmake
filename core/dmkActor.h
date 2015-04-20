#include "oxygine.h"
#include "SDL.h"
#include "Actor.h"
#include "Hitbox.h"

using namespace oxygine;

class DmkActor: public Actor {

  DmkActor(Hitbox * hb){
    addChild(hb);
    hitbox = &hb;
  }

  protected Hitbox * hitbox;

  public Hitbox getHB();
  public virtual void update();
  public int collidesWith(dmkActor other);

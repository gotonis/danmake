#include "oxygine.h"
#include "SDL.h"
#include "Actor.h"
#include "dmkActor.h"
#include "Hitbox.h"

using namespace oxygine;

public Hitbox DmkActor::getHB(){
  return *hitbox;
}

public int DmkActor::collidesWith(dmkActor other){
  return hitbox->collidesWith(other.getHB());
}

protected void DmkActor::move(){
  float curX = getX();
  float curY = getY();
  setPosition(curX + curVX, curY + curVY);
}

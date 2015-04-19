#include "oxygine.h"
#include "SDL.h"
#include "Actor.h"

using namespace oxygine;

class DmkActor: public Actor {

  DmkActor(Hitbox * hb){
    addChild(hb);
  }
  

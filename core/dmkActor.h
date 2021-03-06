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

  
 public:
   Hitbox getHB();
   virtual void update();
   int collidesWith(dmkActor other);
   
 protected:
   Hitbox * hitbox;
   float curVX;
   float curVY;

   void move();

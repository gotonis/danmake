#include "oxygine.h"
#include <Actor.h>
#include "SDL.h"
#include "dmkActor.h"
#include "dmkPlayer.h"

using namespace oxygine;

public void DmkPlayer::Update {

  if(dbclock.tick() == 0){
    // ~this; //destroy self. I think that's correct syntax?
  }
}

DmkPlayer::DmkPlayer(){
  dbclock = new timer(dbinterval);
  

}

public void DmkPlayer::die(){
  dbclock.restart();
}

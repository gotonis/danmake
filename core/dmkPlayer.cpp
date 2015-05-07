#include "oxygine.h"
#include <Actor.h>
#include "SDL.h"
#include "dmkActor.h"
#include "dmkPlayer.h"

using namespace oxygine;

  public void DmkPlayer::update() throw (int) {
  
  if(dbclock.tick() == 0){
    throw new -1;
  }
}

DmkPlayer::DmkPlayer(){
  dbclock = new timer(dbinterval);
  bombs = startBombs;

}

DmkPlayer::respawn(int x, int y){
  dbclock.cancel();
  bombs = startBombs;
  setX(x);
  setY(y);
}

public void DmkPlayer::die(){
  dbclock.restart(); //Start the deathbomb timer
  //death sound effect
}

public void DmkPlayer::bomb(){
  bombs--;
  dbclock.cancel();
  //other stuff bombs do while active
}

public void DmkPlayer::bombExt(){
  bombs++;
}

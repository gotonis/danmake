#include <oxygine.h>
#include <Actor.h>
#include "SDL.h"
#include "dmkActor.h"
#include "dmkBullet.h"
#include "dmkPlayer.h"
#include "dmkEnemy.h"
#include "dmkPBullet.h"
#include "Hitbox.h"
#include <map>
#include "dmkEngine.h"

using namespace oxygine;

public void dmkEngine::update(){
  try{
  player.update();
  }
  catch (-1) {
    if(pLives > 0){
      pLives--;
      player.respawn(spawnx, spawny);
    }
    else {
      //Go to some menu
    }
  }

  for (std::map<int,dmkBullet>::iterator it=bullets.begin(); it!=bullets.end(); ++it){
    it->second.update();
    if(it->second == NULL){
      bullets.erase(it->first);
    }
    if(it->second.collidesWith(player)){
      player.die();
    }
  }
}

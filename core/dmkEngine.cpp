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
  player.update();

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

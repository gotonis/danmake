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

using namespace oxygine;

class dmkEngine {
  
  dmkEngine(); //may point to some sort of construction info file
  dmkPlayer player;
  map<int, dmkBullet> bullets;
  int spawnx; //player start location
  int spawny;
  int pLives; //current number of lives the player has
  public void update();

#include "oxygine.h"
#include "Actor.h"
#include "SDL.h"
#include "dmkActor.h"

using namespace oxygine;

class DmkPlayer: public DmkActor {

  static int dbinterval = 1;

  DmkPlayer();
  
  //protected int deathBombInterval; //How long you have to db
  protected int fireFrame; //For the firing loop
  protected int maxFireFrame;
  protected float vx; //normal unfocused x and y speeds
  protected float vy;
  protected float fvx; //normal focused x and y speeds
  protected float fvy;
  protected timer dbclock;
  public void fire();
  
  public void update();
  public void die();

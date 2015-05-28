#include "oxygine.h"
#include "Actor.h"
#include "SDL.h"
#include "dmkActor.h"

using namespace oxygine;

class DmkPlayer: public DmkActor { //will become abstract after testing

  static virtual int dbinterval = 1;
  static virtual int startBombs = 2;
  DmkPlayer();
  
  
 protected: 
  virtual int fireFrame; //For the firing loop
  virtual int maxFireFrame;
  float vx; //normal unfocused x and y speeds
  float vy;
  float fvx; //normal focused x and y speeds
  float fvy;
  virtual timer dbclock;
  int bombs;

  public void bombExt();
  public virtual void fire();
  
  public void update() throw (int);
  protected void die();
  protected void bomb();
  public void respawn();
  
  //TODO: implement bombs

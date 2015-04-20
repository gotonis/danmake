#include "timer"

using namespace oxygine;

public int timer::tick(){
  if(curtime > 0){
    curtime--;
  }
  else{
    curtime = -1;
  }
  return curtime;
}

public void timer::restart(){
  curtime = max;
}

public void timer::cancel(){
  curtime = -1;
}

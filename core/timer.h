using namespace oxygine;

class timer{
  timer(int maxtime){
    curtime = -1;
    max = maxtime;
  }

  protected int max;
  protected int curtime;
  public int tick();
  public void restart();
  public void cancel();
}

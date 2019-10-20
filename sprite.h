#ifndef _SPRITE_H_
#define _SPRITE_H_
#include "Object.h"

class Sprite
{
  private:
    int x;
    int y;
    int velX;
    int velY;
    short w;
    short h;
    volatile Object *object;
  public:
    int getX() { return x; }
    int getY() { return y; }
    int getVelX() { return velX; }
    int getVelY() { return velY; }
    short getW() { return w; }
    short getH() { return h; }
    volatile Object *getObject() { return object; }

  protected:
};

#endif

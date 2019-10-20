#ifndef _OBJECT_H_
#define _OBJECT_H_

class Object
{
  private:
    short int attribute0;
    short int attribute1;
    short int attribute2;
    short int unused;
  public:
    //Setters
    inline void setAttribute0(short int attribute0) { this->attribute0 = attribute0; }
    inline void setAttribute1(short int attribute1) { this->attribute1 = attribute1; }
    inline void setAttribute2(short int attribute2) { this->attribute2 = attribute2; }

    //Getters

    inline short int getAttribute0() { return attribute0; }
    inline short int getAttribute1() { return attribute1; }
    inline short int getAttribute2() { return attribute2; }

  protected:
};

#endif

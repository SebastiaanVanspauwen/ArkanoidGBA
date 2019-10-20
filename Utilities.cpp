#include "Utilities.h"
using namespace std;

Object * Utilities::create_object(int attr0, int attr1, int attr2)
{
  Object *obj = new Object();
  cout << "Object adress: " << &obj << endl;
  cout << attr0 << endl;
  obj->setAttribute0(attr0);
  obj->setAttribute1(attr1);
  obj->setAttribute2(attr2);
  cout << "Creating object with " << obj->getAttribute0() << obj->getAttribute1() << obj->getAttribute2() << endl;

  return obj;
}

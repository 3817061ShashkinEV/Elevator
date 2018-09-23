#ifndef _TGOODS_H_
#define _TGOODS_H_
#include "TElevator.h"

class TGoods :
  public TElevator
{
protected:
  float length;
  float width;
  float S;
public:
  void SetLength(float l);
  void SetWidth(float w);
  float GetLength();
  float GetWidth();
  float FindS();
};
#endif

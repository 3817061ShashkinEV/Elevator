#include "TElevator.h"
#ifndef __PASSENGERS_H__
#define __PASSENGERS_H__

class TPassengers:public TElevator 
{
protected:
int price;
public:
int GetPrice();
void SetPrice(int _price);
};
#endif

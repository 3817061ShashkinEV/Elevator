#include "TElevator.h"
#ifndef __PASSENGERS_H__
#define __PASSENGERS_H__

class TPassengers:public TElevator 
{
protected:
int NumberOfPeople;
int price;
public:
int GetNumberOfPeople();
void SetNumberOfPeople();
int GetPrice();
void SetPrice();
};
#endif

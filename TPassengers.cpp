#include "Passengers.h"
#include <iostream>
using namespace std;

int TPassengers::GetNumberOfPeople()
{
	return NumberOfPeople;
}
// ---------------------------------------------------------------------------
int TPassengers::GetPrice()
{
	return price;
}
// ---------------------------------------------------------------------------
void TPassengers::SetNumberOfPeople()
{
  int WeightPerson=62;
	NumberOfPeople=MaxWeight/WeightPerson;
}
// ---------------------------------------------------------------------------
void TPassengers::SetPrice()
{
  int value=20;
  price=Height*value;
}
// ---------------------------------------------------------------------------

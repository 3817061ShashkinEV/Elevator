#include "TGoods.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>

void TGoods::SetLength(float l)
{
  length = l;
}
//------------------------------------------------------------
float TGoods::GetLength()
{
  return length;
}
//------------------------------------------------------------
void TGoods::SetWidth(float w)
{
  width = w;
}
//------------------------------------------------------------
float TGoods::GetWidth()
{
  return width;
}
//------------------------------------------------------------
float TGoods::FindS()
{
  int S = length * width;
  return S;
}
//------------------------------------------------------------

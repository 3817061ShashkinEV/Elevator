#include "h2.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>
using namespace std;
void TElevator::SetHeight(int h)
{
	Height = h;
}
//------------------------------------------------------------
void TElevator::SetMaxWeight(float weight)
{
	MaxWeight = weight;
}
//------------------------------------------------------------
void TElevator::SetPassNum(int n)
{
	PassangersNumber = n;
}
//------------------------------------------------------------
int TElevator::GetHeight()
{
	return Height;
}
//------------------------------------------------------------
void TElevator::SetStop(bool s)
{
	Stop = s;
}
//------------------------------------------------------------
bool TElevator::GetStop()
{
	return Stop;
}
//------------------------------------------------------------
float TElevator::GetMaxWeight()
{
	return MaxWeight;
}
//------------------------------------------------------------
int TElevator::GetMaxPN()
{
	int MaxPN = GetMaxWeight() / 70;
	return MaxPN;
}
//------------------------------------------------------------
int TElevator::GetPassNum()
{
	return PassangersNumber;
}
//------------------------------------------------------------
float TElevator::GetPassangarsWeight()
{
	return (PassangersNumber * 70);
}
//------------------------------------------------------------
TElevator::TElevator()
{
	MaxWeight = 0;
	PassangersNumber = 0;
	Height = 0;
	PassangersWeight = 0;
}
//------------------------------------------------------------
TElevator::TElevator(TElevator &c)
{
	MaxWeight = c.MaxWeight;
	PassangersNumber = c.PassangersNumber;
	Height = c.Height;
	PassangersWeight = c.PassangersWeight;
}
//------------------------------------------------------------
TElevator::TElevator(float a, int b, int c)
{
	MaxWeight = a;
	PassangersNumber = a;
	Height = c;
}
//------------------------------------------------------------
void TElevator::Settings(float a, int c)
{
	MaxWeight = a;
	Height = c;
}
//------------------------------------------------------------
void TElevator::Event(int LastFloor, int FirstFloor, int is)
{
	int event = rand() % 3;
	int flag = 0;
	Stop = 0;
	int *passangers;
	int MaxPN = GetMaxPN();
	passangers = new int[MaxPN - 1];
	int anotherpass = 0;
	for (int i = 0; i <= MaxPN; i++)
		passangers[i] = LastFloor;
	int f;
	switch (event)
	{
	case 0:
	{
		cout << "\t<<< Nothing happens. Keep going. >>>" << "\n";
	}
	break;
	case 1:
	{
		cout << "\t<<< Door is open. Noone is outside. That person used the stairs.. >> > " << "\n";
	}
	break;
	case 2:
	{
		cout << "\t<<< Door is open. Someone is outside. That person is headed in the same direction as you >> > " << "\n";
			PassangersNumber += 1;
		if (PassangersNumber < MaxPN)
		{
			cout << "\t<<< He/She wants to the floor ";
			cin >> f;
			cout << " >>>" << "\n";
			passangers[PassangersNumber] = f;
		}
		if (PassangersNumber > MaxPN)
		{
			cout << "\t<<< He/She can't go with you. >>>" << "\n";
		}
	}
	break;
	}
	if (FirstFloor > LastFloor)
		if (is == LastFloor + 1)
		{
			Stop = 1;
			cout << "\t<<< It is time to leave >>>" << "\n";
		}
	if (FirstFloor < LastFloor)
		if (is == LastFloor - 1)
		{
			Stop = 1;
			cout << "\t<<< It is time to leave >>>" << "\n";
		}
}
//------------------------------------------------------------
void TElevator::ElevatorTravel(int FirstFloor, int LastFloor, int HowMany)
{
	
	int MaxPN = GetMaxPN();
	PassangersNumber = HowMany;
	if (FirstFloor > LastFloor)
	{
		cout << "\t<<< Going down >>>" << "\n";
		for (int i = FirstFloor; i >= LastFloor; i--)
		{
			cout << "\t | " << i << " | " << "\n";
			Sleep(3000);
			Event(LastFloor, FirstFloor, i);
		}
	}
	if (FirstFloor < LastFloor)
	{
		cout << "\t<<< Going up >>>" << "\n";
		for (int i = FirstFloor; i <= LastFloor; i++)
		{
			cout << "\t | " << i << " | " << "\n";
			Sleep(3000);
			Event(LastFloor, FirstFloor, i);
		}
	}
}
//------------------------------------------------------------
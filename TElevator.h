#ifndef _TELEVATOR_H_
#define _TELEVATOR_H_
#include <iostream>
using namespace std;
class TElevator
{
protected:
	float MaxWeight;
	int Height;
	bool Stop;
	float PassangersWeight;
	int PassangersNumber;
	int MaxPN;
public:
	void SetMaxWeight(float weight);
	void SetPassNum(int n);
	void SetHeight(int h);
	void Settings(float a, int c);
	void Event(int LastFloor, int FirstFloor, int is);
	int GetMaxPN();
	void ElevatorTravel(int FirstFloor, int LastFloor, int HowMany);
	float GetMaxWeight();
	float GetPassangarsWeight();
	int GetPassNum();
	int GetHeight();
	void SetStop(bool s);
	bool GetStop();
	TElevator();
	TElevator(TElevator &c);
	TElevator(float a, int b, int c);
};
#endif
TElevator

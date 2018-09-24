#include <iostream>
#include <TElevator.h>
#include <TGoods.h>
#include <TPassengers.h>

using namespace std;

void main()
{
	int k, HeightOfBuilding, MaxWeightOfElevator, PassengerPrice, CurrentFloor, NeedFloor, NumOfPassengers;
	float GoodsLenght, GoodsWidth;
	TGoods Goods;
	TPassengers Passengers;
	cout << "Choose the type of elevator:\n";
	cout << "1. Goods.\n";
	cout << "2. Passenger.\n";
	cin >> k;
	switch (k) {
	case 1:
		cout << "Elevator settings:\n";
		cout << "Enter the number of floors in the building: ";
		cin >> HeightOfBuilding;
		cout << "Enter the maximum allowable weight for this elevator: ";
		cin >> MaxWeightOfElevator;
		cout << "Enter the length of the goods elevator: ";
		cin >> GoodsLenght;
		cout << "Enter the width of the goods elevator: ";
		cin >> GoodsWidth;
		Goods.Settings(MaxWeightOfElevator, HeightOfBuilding);
		Goods.SetLength(GoodsLenght);
		Goods.SetWidth(GoodsWidth);
		cout << "The setting of the goods elevator is completed!\n";
		cout << "------------------------------------------------------------\n";
		while (1)
		{
			cout << "Enter the number of the current floor: ";
			cin >> CurrentFloor;
			cout << "Enter the number of the required floor: ";
			cin >> NeedFloor;
			cout << "Enter the number of people in the elevator: ";
			cin >> NumOfPassengers;
			Goods.ElevatorTravel(CurrentFloor, NeedFloor, NumOfPassengers);
		}
		break;
	case 2:
		cout << "Elevator settings:\n";
		cout << "Enter the number of floors in the building: ";
		cin >> HeightOfBuilding;
		cout << "Enter the maximum allowable weight for this elevator: ";
		cin >> MaxWeightOfElevator;
		cout << "Enter the price of the fare: ";
		cin >> PassengerPrice;
		Passengers.Settings(MaxWeightOfElevator, HeightOfBuilding);
		Passengers.SetPrice(PassengerPrice);
		cout << "The setting of the passenger elevator is completed!\n";
		cout << "------------------------------------------------------------\n";
		while (1) 
		{
			cout << "Enter the number of the current floor: ";
			cin >> CurrentFloor;
			cout << "Enter the number of the required floor: ";
			cin >> NeedFloor;
			cout << "Enter the number of people in the elevator: ";
			cin >> NumOfPassengers;
			Passengers.ElevatorTravel(CurrentFloor, NeedFloor, NumOfPassengers);
		}
		break;
	default:
		cout << "You did not choose the type of elevator or chose it incorrectly!\n";
		break;
	}
}
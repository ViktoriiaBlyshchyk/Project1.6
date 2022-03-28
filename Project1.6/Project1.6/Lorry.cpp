#include "Lorry.h"
#include <iostream>

using namespace std;

void Lorry::Init(unsigned int carryingAbility, Lorry::Car car)
{
	SetCarryingAbility(carryingAbility);
	SetCar(car);
}

void Lorry::Display() const
{
	cout << endl;
	cout << "Car: " << endl;
	car.Display();
	cout << "carryingAbility = " << carryingAbility << endl;
}

void Lorry::Read()
{
	unsigned int carryingAbility;
	Lorry::Car c;
	cout << "Car: " << endl;
	c.Read();
	cout << "carryingAbility = "; cin >> carryingAbility;
	cout << endl;
	c.Change1();
	carryingAbility = Change2();
	Init(carryingAbility, c);
}

void Lorry::Car::Init(string tradeMark, unsigned int enginePower, unsigned int numberOfCylinders)
{
	SetTradeMark(tradeMark);
	SetEnginePower(enginePower);
	SetNumberOfCylinders(numberOfCylinders);
}

void Lorry::Car::Display() const
{
	cout << endl;
	cout << "tradeMark = " << tradeMark << endl;
	cout << "enginePower = " << enginePower << endl;
	cout << "numberOfCylindersk = " << numberOfCylinders << endl;
}

void Lorry::Car::Read()
{
	string tradeMark;
	unsigned int enginePower;
	unsigned int numberOfCylinders;
	cout << endl;
	cout << "tradeMark = "; cin >> tradeMark;
	cout << "enginePower = "; cin >> enginePower;
	cout << "numberOfCylinders = "; cin >> numberOfCylinders;
	Init(tradeMark, enginePower, numberOfCylinders);
}

double Lorry::Car::Change1()
{
	int x;
	cout << "enginePower = "; cin >> x;
	enginePower = x;
	return x;
}

double Lorry::Change2()
{
	int y;
	cout << "carryingAbility = "; cin >> y;
	return y;
}
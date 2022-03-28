#pragma once
#include <string>

using namespace std;

class Lorry
{
private:
	unsigned int carryingAbility;

	class Car
	{
	private:
		string tradeMark;
		unsigned int enginePower;
		unsigned int numberOfCylinders;

	public:
		string GetTradeMark() const { return tradeMark; };
		unsigned int GetEnginePower()  const { return enginePower; };
		unsigned int GetNumberOfCylinders() { return numberOfCylinders; };

		void SetTradeMark(string tradeMark) { this->tradeMark = tradeMark; };
		void SetEnginePower(unsigned int enginePower) { this->enginePower = enginePower; }
		void SetNumberOfCylinders(unsigned int numberOfCylinders) { this->numberOfCylinders = numberOfCylinders; }

		void Init(string tradeMark, unsigned int enginePower, unsigned int numberOfCylinders);
		void Display() const;
		void Read();

		double Change1();
	};

	Car car;

public:
	unsigned int GetCarryingAbility() const { return carryingAbility; };
	Lorry::Car GetCar() const { return car; }
	void SetCarryingAbility(unsigned int carryingAbility) { this->carryingAbility = carryingAbility; }
	void SetCar(Lorry::Car car) { this->car = car; }

	void Init(unsigned int carryingAbility, Lorry::Car car);
	void Display() const;
	void Read();

	double Change2();
};


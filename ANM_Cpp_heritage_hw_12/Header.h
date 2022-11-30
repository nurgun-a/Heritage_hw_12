#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include <string.h>
using namespace std;

class Transport
{
	string Name;
public:
	Transport(string _name);
	virtual void Print();
	virtual void show_h()
	{
		cout << setw(16) << "Марка и модель|" << setw(6) <<
			"год |" << setw(6) << "Оъем|";
	}
};
class Vehicle : public Transport
{
	int year;
	double volume;
public:
	Vehicle(string _name, int _year, double _volume) ;

	virtual void Print();
};
class Truck : public Vehicle
{
	double gr;
public:
	Truck(string _name, int _year, double _value, double _gr) ;
	virtual void Print();
	virtual void show_h()
	{
		Transport::show_h(); cout << setw(5) << "Г/П" << endl;
	}
};
class Bus : public Vehicle
{
	int col_p;
public:
	Bus(string _name, int _year, double _value, int _col_p);
	virtual void Print();
	virtual void show_h()
	{
		Transport::show_h(); cout << setw(5) << "Число мест" << endl;
	}
};
class Car :public Vehicle
{
	string equip;
public:
	Car(string _name, int _year, double _value, string _equip) ;
	virtual void Print();
	virtual void show_h()
	{
		Transport::show_h(); cout << setw(13) << "Комплектация" << endl;
	}
};
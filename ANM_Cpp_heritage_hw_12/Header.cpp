#include "Header.h"

Transport::Transport(string _name)
{
	Name = _name;
}

void Transport::Print()
{
	cout << setw(15)<<Name <<'|';
}

Vehicle::Vehicle(string _name, int _year, double _volume) :Transport(_name)
{
	year = _year; volume = _volume;
}

void Vehicle::Print()
{
	Transport::Print(); cout << setw(5) << year << '|' << setw(5) << volume << '|';
}

Truck::Truck(string _name, int _year, double _value, double _gr) : Vehicle(_name, _year, _value)
{
	gr = _gr;
}

void Truck::Print()
{
	Vehicle::Print(); cout << setw(5) << gr << endl;
}

Bus::Bus(string _name, int _year, double _value, int _col_p) : Vehicle(_name, _year, _value)
{
	col_p = _col_p;
}

void Bus::Print()
{
	Vehicle::Print(); cout << setw(5) << col_p << endl;

}

Car::Car(string _name, int _year, double _value, string _equip) : Vehicle(_name, _year, _value)
{
	equip = _equip;
}

void Car::Print()
{
	Vehicle::Print(); cout << setw(5) << equip << endl;
}

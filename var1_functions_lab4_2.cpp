#include "var1_header_lab4_2.h"


//default constructor
Wheel::Wheel()
{
	p_radius = 0;
}


//constructor with argument
Wheel::Wheel(int_plus radius)
{
	p_radius = radius;
}


//set radius
int_plus Wheel::getRadius() const
{
	return p_radius;
}


//get radius
void Wheel::setRadius(const int_plus radius)
{
	p_radius = radius;
}


//default constructor
Car::Car()
{
	p_company = "None";
}


Car::Car(string company)
{
	p_company = company;
}


//constructor with 3 arguments
Car::Car(int_plus count, string company, int_plus radius) : Car(company)
{
	for (int_plus i = 0; i < count; ++i)
		p_wheel.push_back(Wheel(radius));

}


//get company
const string& Car::getCompany() const
{
	return p_company;
}


//get wheel
vector<Wheel> Car::getWheel() const
{
	return p_wheel;
}


//set company
void Car::setCompany(const string& company)
{
	p_company = company;
}



//default constructor
AutoTruck::AutoTruck() : Car() 
{
	p_carrrying = 0;
}


//constructor with argument
AutoTruck::AutoTruck(int_plus count, string company, int_plus radius, int_plus carrying) :
	Car(count, company, radius)
{
	p_carrrying = carrying;
}


//get carrrying
int_plus AutoTruck::getCarrying() const
{
	return p_carrrying;
}


//set carrrying
void AutoTruck::setCarrying(int_plus carrrying)
{
	p_carrrying = carrrying;
}
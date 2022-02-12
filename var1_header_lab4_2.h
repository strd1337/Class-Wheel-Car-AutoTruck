#include <iostream>
#include <string>
#include <vector>


using namespace std;
typedef unsigned int int_plus;


class Wheel
{
public:
	//constructors
	Wheel();											//default constructor
	Wheel(int_plus);									//constructor with argument

	int_plus getRadius() const;							//set radius
	void setRadius(const int_plus);						//get radius
private:
	int_plus p_radius;									//radius
};


class Car
{
public:
	//constructors
	Car();												//default constructor
	Car(string);										//constructor with argument
	Car(int_plus, string, int_plus);					//constructor with 3 arguments
	
	const string & getCompany() const;					//get company
	vector<Wheel> getWheel() const;						//get wheel
	void setCompany(const string&);						//set company
private:
	string p_company;									//manufawcturer company
	vector<Wheel> p_wheel;								//class wheel
};


class AutoTruck : public Car
{
public:
	//constructors
	AutoTruck();										//default constructor
	AutoTruck(int_plus, string, int_plus, int_plus);	//constructor with argument
		
	int_plus getCarrying() const;						//get carrrying
	void setCarrying(int_plus);							//set carrrying
private:
	int_plus p_carrrying;								//carrrying
}; 
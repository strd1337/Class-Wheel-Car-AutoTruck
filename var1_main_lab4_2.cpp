/*

Вариант 1

b) Создать класс колесо, имеющий радиус. Определить конструкторы и методы доступа.
Создать класс автомобиль, имеющий колеса и строку обозначающую фирмупроизводителя. 
Создать производный класс грузовой автомобиль, отличающийся грузоподъемностью. 
Определить конструкторы, деструктор и другие необходимые функции

*/


#include "var1_functions_lab4_2.cpp"


int main()
{
	Wheel A, B(20);

	cout << "Wheel A, radius:";
	cout << A.getRadius() << endl;

	cout << "\nWheel B, radius:";
	cout << B.getRadius() << endl;

	A.setRadius(15);
	cout << "\nA.setRadius(15), Wheel A, radius:";
	cout << A.getRadius() << endl;

	Car C, D("BMW"), E(4,"BMW", 17);

	cout << "\nCar C\nCompany:";
	cout << C.getCompany() << endl;

	cout << "\nCar D\nCompany:";
	cout << D.getCompany() << endl;

	cout << "\nCar E:\n";
	cout << "Company: " << E.getCompany() << endl;
	cout << "Radius: " << E.getWheel()[0].getRadius() << endl;

	AutoTruck F(6, "VOLVO", 24, 400);
	cout << "\nCar F:\n";
	cout << "Company: " << F.getCompany() << endl;
	cout << "Radius: " << F.getWheel()[0].getRadius() << endl;
	cout << "Carrying: " << F.getCarrying() << endl;

	system("pause");
	return 0;
}




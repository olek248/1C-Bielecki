#include <iostream>

struct point
{
	double x;
	double y;
};

void getPointValue(double& x, double& y)
{
	std::cout << "Podaj x\n";
	std::cin >> x;
	std::cout << "Podaj g\n";
	std::cin >> y;
}

//napisz program, kt�ry oblicza odleg�o�� punktu 2D od innego punktu
void task1()
{
	//double x, y;
	point firstPoint;
	//firstPoint.x = 5.9;

	getPointValue(firstPoint.x, firstPoint.y);

	double distance = sqrt(firstPoint.x * firstPoint.x + firstPoint.y * firstPoint.y);

	std::cout << "odleg�o�� to " << distance << "\n";
}



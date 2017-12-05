#pragma once
#include <cmath>

class Pol_coord
{

public:
	Pol_coord(double di_val, double th_val);
	
	void convToPolar(double x, double y);
	void setData(double x, double y);
	double distance();
	double thet();

private:
	double dist;
	double theta;
	double xValue, yValue;
};

Pol_coord::Pol_coord(double = 1.0, double = 1.0) {}

//Setter
void Pol_coord::setData(double x, double y)
{
	xValue = x;
	yValue = y;
}
//Distance Calculator
double Pol_coord::distance()
{
	dist = sqrt((xValue*xValue) + (yValue*yValue));
	return dist;
}
//Theta Calculator
double Pol_coord::thet()
{
	//ThetaValue
	theta = atan(yValue / xValue);
	return theta;
}
void Pol_coord::convToPolar(double x, double y)
{
	//Output
	std::cout << "The polar coordinate is: ( " << distance() << " , " << thet() << " )" << std::endl;
}